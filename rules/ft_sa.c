/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:37:29 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:24:35 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sa(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("sa"));
	ft_swap(&stacks->stack_a);
}
