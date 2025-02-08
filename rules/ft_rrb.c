/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:01:46 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:36:08 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rrb(t_stackes *stackes)
{
	ft_lstadd_back(&stackes->instructions, ft_lstnew("rrb"));
	if (ft_reverse_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
