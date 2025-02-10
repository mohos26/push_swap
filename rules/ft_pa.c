/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:51:39 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/09 16:12:17 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_pa(t_stackes *stacks)
{
	puts("pa");
	if (ft_push(&stacks->stack_a, &stacks->stack_b))
		return (-1);
	return (0);
}
