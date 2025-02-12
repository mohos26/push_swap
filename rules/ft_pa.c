/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:51:39 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:23:50 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_pa(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("pa"));
	ft_push(&stacks->stack_a, &stacks->stack_b);
}
