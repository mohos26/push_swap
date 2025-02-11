/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:01:51 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 09:16:19 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_aid(int *lst, int n, int i)
{
	int	j;

	j = 0;
	while (i > j)
	{
		if (n == lst[j])
			return (0);
		j++;
	}
	return (1);
}

static int	ft_aid2(t_list *lst, int *lst_max, int i)
{
	int	aid;

	aid = ft_get_min(lst, 1);
	while (lst)
	{
		if (*(lst->content) > aid && ft_aid(lst_max, *(lst->content), i))
			aid = *(lst->content);
		lst = lst->next;
	}
	return (aid);
}

static int	*ft_create_lst(t_list *lst, int n)
{
	int		*lst_max;
	int		i;

	lst_max = ft_malloc(sizeof(int) * n);
	i = 0;
	while (n > i)
	{
		lst_max[i] = ft_aid2(lst, lst_max, i);
		i++;
	}
	return (lst_max);
}

static int	ft_get(t_list *lst)
{
	static int	*lst_max;
	static int	meduim;
	int			i;

	if (!lst_max)
	{
		meduim = ft_lstsize(lst) / 2;
		lst_max = ft_create_lst(lst, meduim);
	}
	if (ft_lstsize(lst) == meduim)
	{
		lst_max = ft_create_lst(lst, 3);
		meduim = 3;
	}
	i = 0;
	while (lst)
	{
		if (ft_aid(lst_max, *(lst->content), meduim))
			break ;
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_pb_min(t_stackes **stackes)
{
	ft_pa_top(stackes, ft_get((*stackes)->stack_a));
	ft_pb(*stackes);
}
