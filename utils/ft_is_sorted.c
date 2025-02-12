/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:57:00 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 18:54:03 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_is_sorted(t_stackes *stackes)
{
	int		lst2[2];
	t_list	*lst;

	lst = stackes->stack_a;
	lst2[0] = INT_MIN;
	while (lst)
	{
		lst2[1] = *(lst->content);
		if (lst2[1] < lst2[0])
			return (0);
		lst2[0] = lst2[1];
		lst = lst->next;
	}
	return (!(stackes->stack_b && ft_lstsize(stackes->stack_b)));
}
