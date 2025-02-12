/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:54:43 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:23:59 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_ra(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("ra"));
	ft_rotate(&stackes->stack_a);
}
