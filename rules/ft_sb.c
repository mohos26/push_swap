/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:46:21 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:24:39 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_sb(t_stackes *stacks)
{
	ft_insadd_back(&stacks->instructions, ft_insnew("sb"));
	ft_swap(&stacks->stack_b);
}
