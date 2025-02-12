/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:43 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:24:07 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_rr(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rr"));
	ft_rotate(&stackes->stack_a);
	ft_rotate(&stackes->stack_b);
}
