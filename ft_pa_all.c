/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:21 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/06 13:04:54 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_pa_all(t_stackes **stackes)
{
	int	aid;
	while (ft_lstsize((*stackes)->stack_b))
	{
		if (*((*stackes)->stack_b->content) >= *(ft_lstlast((*stackes)->stack_b)->content))
			ft_pa(*stackes);
		else
			ft_rrb(*stackes);
	}
}
