/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:03:03 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/06 08:18:37 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int ft_rrr(t_stackes *stackes)
{
	puts("rrr");
	if (ft_reverse_rotate(&stackes->stack_a)
		|| ft_reverse_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
