/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:37:29 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:52:47 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_sa(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("sa"));
	if (ft_swap(&stacks->stack_a))
		return (-1);
	return (0);
}
