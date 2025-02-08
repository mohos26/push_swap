/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:47:56 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:37:15 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_ss(t_stackes *stacks)
{
	ft_lstadd_back(&stacks->instructions, ft_lstnew("ss"));
	if (ft_swap(&stacks->stack_a) || ft_swap(&stacks->stack_b))
		return (-1);
	return (0);
}