/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:01:51 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/05 15:26:10 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int static	ft_find_min(t_list *lst, int flag)
{
	int	*aid;
	int	i;
	int	j;

	aid = NULL;
	i = 0;
	while (lst)
	{
		if (!aid || *aid > *(lst->content))
		{
			j = i;
			aid = lst->content;
		}
		lst = lst->next;
		i++;
	}
	if (flag)
		return (j);
	return (*aid);
}

void	ft_pb_min(t_stackes **stackes)
{
	t_list	*lst_a;
	t_list	*lst_b;
	int		aid;
	int		min;

	lst_a = (*stackes)->stack_a;
	lst_b = (*stackes)->stack_b;
	aid = ft_lstsize(lst_a) / 2;
	min = ft_find_min(lst_a, 0);
	while (!(lst_b && min == *(lst_b->content)))
	{
		if (!ft_find_min(lst_a, 1))
		{
			ft_pb(*stackes);
			break ;
		}
		else if (aid >= ft_find_min(lst_a, 1))
			ft_ra(*stackes);
		else
			ft_rra(*stackes);
		lst_a = (*stackes)->stack_a;
		lst_b = (*stackes)->stack_b;
	}
}
