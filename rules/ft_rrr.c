/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:03:03 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:52:32 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rrr(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rrr"));
	if (ft_reverse_rotate(&stackes->stack_a)
		|| ft_reverse_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
