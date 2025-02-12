/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:01:46 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:24:20 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rrb(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rrb"));
	ft_reverse_rotate(&stackes->stack_b);
}
