/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:46:21 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:37:01 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_sb(t_stackes *stacks)
{
	ft_lstadd_back(&stacks->instructions, ft_lstnew("sb"));
	if (ft_swap(&stacks->stack_b))
		return (-1);
	return (0);
}
