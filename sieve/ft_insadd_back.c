/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:00:15 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:43:49 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_insadd_back(t_instruction **lst, t_instruction *new)
{
	t_instruction	*aid;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		aid = *lst;
		while (aid->next)
			aid = aid->next;
		aid->next = new;
	}
}
