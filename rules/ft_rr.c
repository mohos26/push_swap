/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:43 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:35:38 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rr(t_stackes *stackes)
{
	ft_lstadd_back(&stackes->instructions, ft_lstnew("rr"));
	if (ft_rotate(&stackes->stack_a) || ft_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
