/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:00:04 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:52:19 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rra(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rra"));
	if (ft_reverse_rotate(&stackes->stack_a))
		return (-1);
	return (0);
}
