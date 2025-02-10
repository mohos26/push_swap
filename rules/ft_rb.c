/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:58:24 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:51:41 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_rb(t_stackes *stackes)
{
	ft_insadd_back(&stackes->instructions, ft_insnew("rb"));
	if (ft_rotate(&stackes->stack_b))
		return (-1);
	return (0);
}
