/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:47:56 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:28:15 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_ss(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("ss"));
	ft_swap(&stacks->stack_a);
	ft_swap(&stacks->stack_b);
}
