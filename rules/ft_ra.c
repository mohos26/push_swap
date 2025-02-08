/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:54:43 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:34:46 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_ra(t_stackes *stackes)
{
	ft_lstadd_back(&stackes->instructions, ft_lstnew("ra"));
	if (ft_rotate(&stackes->stack_a))
		return (-1);
	return (0);
}
