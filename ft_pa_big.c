/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_big.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:06:05 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/07 21:20:46 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_aid(t_list *lst, int n)
{
	int		i;
	int		j;
	int		*aid;

	i = 0;
	j = 0;
	aid = NULL;
	while (lst)
	{
		if (*(lst->content) - n > 0)
		{
			if (aid && *aid > *(lst->content) - n)
			{
				*aid = *(lst->content) - n;
				j = i;
			}
			else if (!aid)
			{
				aid = ft_malloc(sizeof(int));
				*aid = *(lst->content) - n;
				j = i;
			}
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

static int	ft_best_step(t_stackes **stackes)
{
	t_list	*lst2;
	int		*lst;
	int		len_a;
	int		len_b;
	int		aid;
	int		i;
	int		j;

	len_a = ft_lstsize((*stackes)->stack_a);
	len_b = ft_lstsize((*stackes)->stack_b);
	i = 0;
	lst = ft_malloc(sizeof(int)*len_b);
	lst2 = (*stackes)->stack_b;
	while (i < len_b)
	{
		lst[i] = ft_func(i, len_b) + ft_func(ft_aid((*stackes)->stack_a, *(lst2->content)), len_a) + 1;
		lst2 = lst2->next;
		i++;
	}
	aid = lst[0];
	i = 0;
	j = 0;
	while (i < len_b)
	{
		if (aid > lst[i])
		{
			aid = lst[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	ft_pa_big(t_stackes **stackes)
{
	// ft_pb_top(stackes, ft_best_step(stackes));
	ft_pa_top(stackes, ft_aid((*stackes)->stack_a, *((*stackes)->stack_b->content)));
	ft_pa(*stackes);
}
