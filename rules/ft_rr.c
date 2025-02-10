/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:43 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/09 16:12:46 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rr(t_stackes *stackes)
{
	puts("rr");
	if (ft_rotate(&stackes->stack_a) || ft_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
