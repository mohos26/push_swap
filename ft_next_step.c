/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_step.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:26:12 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/06 13:16:27 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_find_max(t_list *lst_a, int flag)
{
	int	*aid;
	int	i;
	int	j;

	aid = NULL;
	i = 0;
	while (lst_a)
	{
		if (!aid || *aid < *(lst_a->content))
		{
			j = i;
			aid = lst_a->content;
		}
		lst_a = lst_a->next;
		i++;
	}
	if (flag)
		return (j);
	return (*aid);
}

int	ft_cmp(t_list *lst_a, int n1, int n2, int flag)
{
	t_list	*lst;
	int		i, j;
	int		res1, res2;

	lst = lst_a;
	i = 0;
	while (*(lst->content) != n1)
	{
		lst = lst->next;
		i++;
	}
	lst = lst_a;
	j = 0;
	while (*(lst->content) != n2)
	{
		lst = lst->next;
		j++;
	}
	res1 = i + (i >= ft_lstsize(lst_a));
	res2 = 1 + j + (i >= ft_lstsize(lst_a));
	if (flag)
	{
		if (res1 > res2)
			return n2;
		return n1;
	}
	else
	{
		if (res1 > res2)
			return j;
		return i;
	}
}

int	ft_pos(t_list *lst_a, int n)
{
	int	res;

	res = 0;
	while (*(lst_a->content) != n)
	{
		res++;
		lst_a = lst_a->next;
	}
	return (res);
}

void	ft_lst_create(t_stackes **stackes, int flag)
{
	static t_list	*lst_one;
	static t_list	*lst_two;
	t_list			*lst_a;
	t_list			*aid;
	int				*d;
	int				i;

	lst_a = (*stackes)->stack_a;
	if (flag)
	{
		aid = NULL;
		while (lst_a)
		{
			ft_lstadd_back(&aid, ft_lstnew(lst_a->content));
			lst_a = lst_a->next;
		}
		i = 0;
		while (aid)
		{
			d = ft_malloc(4);
			*d = ft_find_max(aid, 0);
			if (i%2)
				ft_lstadd_front(&lst_one, ft_lstnew(d));
			else
				ft_lstadd_front(&lst_two, ft_lstnew(d));
			ft_lst_del_in(&aid, ft_find_max(aid, 1));
			i++;
		}
	}
	else
	{
		int	n1;
		int	n2;
		int	pos;
		int	res;

		if (!lst_one)
			res = *(lst_two->content);
		else if (!lst_two)
			res = *(lst_one->content);
		else
		{
			n1 = *(lst_one->content);
			n2 = *(lst_two->content);
		res = ft_cmp(lst_a, n1, n2, 1);
		}
		pos = ft_pos(lst_a, res);
		while (pos)
		{
			if (pos >= ft_lstsize(lst_a))
				ft_rra(*stackes);
			else
				ft_ra(*stackes);
		lst_a = (*stackes)->stack_a;
		pos = ft_pos(lst_a, res);
		}
		ft_pb(*stackes);
		if (lst_one && n1 == res)
			ft_lst_del_first(&lst_one);
		else
			ft_lst_del_first(&lst_two);
	}
}
