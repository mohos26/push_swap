/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:53:57 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:23:54 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_pb(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("pb"));
	ft_push(&stacks->stack_b, &stacks->stack_a);
}
