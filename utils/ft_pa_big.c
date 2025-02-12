/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_big.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:06:05 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:38:11 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	ft_aid(t_list *lst, int n)
{
	int		*aid;
	int		i;
	int		j;

	i = 0;
	j = 0;
	aid = ft_malloc(sizeof(int));
	*aid = INT_MAX;
	while (lst)
	{
		if (*(lst->content) - n > 0 && *aid > *(lst->content) - n)
		{
			*aid = *(lst->content) - n;
			j = i;
		}
		i++;
		lst = lst->next;
	}
	return (j);
}

static int	ft_func(int x, int len)
{
	int	div;

	div = len / 2;
	if (x > div)
		return (len - x);
	return (x);
}

static int	ft_aid2(t_list *lst_a, int x, int i, int i2)
{
	return (ft_func(x, i) + ft_func(ft_aid(lst_a, i2), ft_lstsize(lst_a)));
}

static int	ft_best_step(t_stackes **stackes)
{
	t_list	*lst;
	int		len_b;
	int		aid;
	int		i;
	int		j;

	i = 0;
	j = 0;
	lst = (*stackes)->stack_b;
	len_b = ft_lstsize((*stackes)->stack_b);
	while (i < len_b)
	{
		if (!i || aid > ft_aid2((*stackes)->stack_a, i, len_b, *(lst->content)))
		{
			aid = ft_aid2((*stackes)->stack_a, i, len_b, *(lst->content));
			j = i;
		}
		lst = lst->next;
		i++;
	}
	return (j);
}

void	ft_pa_big(t_stackes **stackes)
{
	ft_pb_top(stackes, ft_best_step(stackes));
	ft_pa_top(stackes,
		ft_aid((*stackes)->stack_a, *((*stackes)->stack_b->content)));
	ft_pa(*stackes);
}
