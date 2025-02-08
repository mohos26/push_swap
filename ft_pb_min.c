/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:01:51 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 15:50:28 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_get(t_list *lst)
{
	static int	*lst_max;
	t_list		*head;
	int			aid;
	int			i;

	head = lst;
	if (!lst_max)
	{
		lst_max = ft_malloc(sizeof(int)*3);
		aid = *(lst->content);
		lst = lst->next;
		while (lst)
		{
			if (*(lst->content) > aid)
				aid = *(lst->content);
			lst = lst->next;
		}
		lst_max[0] = aid;

		lst = head;
		aid = *(lst->content);
		lst = lst->next;
		while (lst)
		{
			if (aid == lst_max[0] || (*(lst->content) != lst_max[0] && *(lst->content) > aid))
				aid = *(lst->content);
			lst = lst->next;
		}
		lst_max[1] = aid;

		lst = head;
		aid = *(lst->content);
		lst = lst->next;
		while (lst)
		{
			if (aid == lst_max[0] || aid == lst_max[1] || (*(lst->content) != lst_max[0] && *(lst->content) != lst_max[1] && *(lst->content) > aid))
				aid = *(lst->content);
			lst = lst->next;
		}
		lst_max[2] = aid;
	}
	lst = head;
	i = 0;
	while (lst)
	{
		if (*(lst->content) != lst_max[0] && *(lst->content) != lst_max[1] && *(lst->content) != lst_max[2])
			break ;
		i++;
		lst = lst->next;
	}
	return (i);
}

int ft_get_min(t_list *lst)
{
	int	aid;
	int	i;
	int	j;

	i = 0;
	j = 0;
	aid = *(lst->content);
	while (lst)
	{
		if (aid > *(lst->content))
		{
			aid = *(lst->content);
			j = i;
		}
		lst = lst->next;
		i++;
	}
	return (j);
}

void	ft_pb_min(t_stackes **stackes)
{
	ft_pa_top(stackes, ft_get((*stackes)->stack_a));
	ft_pb(*stackes);
}
