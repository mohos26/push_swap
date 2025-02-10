/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:46:21 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 19:05:35 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_sb(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("sb"));
	if (ft_swap(&stacks->stack_b))
		return (-1);
	return (0);
}
