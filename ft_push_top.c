/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:28:29 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/07 19:12:40 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_pa_top(t_stackes **stackes, int i)
{
	int		length;
	t_list	*aid;
	int		aid2;

	aid = (*stackes)->stack_a;
	length = ft_lstsize(aid);
	aid2 = 0;
	while (aid2 != i)
	{
		aid = aid->next;
		aid2++;
	}
	aid2 = *(aid->content);
	aid = (*stackes)->stack_a;
	while (aid2 != *(aid->content))
	{
		if (i > length / 2)
			ft_rra(*stackes);
		else
			ft_ra(*stackes);
	aid = (*stackes)->stack_a;
	}
}

void	ft_pb_top(t_stackes **stackes, int i)
{
	int		length;
	t_list	*aid;
	int		aid2;

	aid = (*stackes)->stack_b;
	length = ft_lstsize(aid);
	aid2 = 0;
	while (aid2 != i)
	{
		aid = aid->next;
		aid2++;
	}
	aid2 = *(aid->content);
	aid = (*stackes)->stack_b;
	while (aid2 != *(aid->content))
	{
		if (i > length / 2)
			ft_rrb(*stackes);
		else
			ft_rb(*stackes);
	aid = (*stackes)->stack_b;
	}
}
