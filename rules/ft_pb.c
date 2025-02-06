/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:53:57 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/05 15:35:55 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_pb(t_stackes *stacks)
{
	puts("pb");
	if (ft_push(&stacks->stack_b, &stacks->stack_a))
		return (-1);
	return (0);
}
