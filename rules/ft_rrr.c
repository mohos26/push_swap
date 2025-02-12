/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:03:03 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:24:24 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rrr(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rrr"));
	ft_reverse_rotate(&stackes->stack_a);
	ft_reverse_rotate(&stackes->stack_b);
}
