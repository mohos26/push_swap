/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:24 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 16:35:23 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rb(t_stackes *stackes)
{
	ft_lstadd_back(&stackes->instructions, ft_lstnew("rb"));
	if (ft_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
