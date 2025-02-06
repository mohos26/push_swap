/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:36:45 by mhoussas          #+#    #+#             */
/*   Updated: 2025/01/30 18:44:54 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_lst_del_last(t_list **lst)
{
	t_list	*aid;
	t_list	*aid2;

	aid = *lst;
	if (aid->next)
	{
		aid2 = aid;
		while (1)
		{
			if (!aid->next)
				break ;
			aid2 = aid;
			aid = aid->next;
		}
		aid2->next = NULL;
	}
	else
		*lst = NULL;

}
