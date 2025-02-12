/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:27:21 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:38:07 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_pa_all(t_stackes **stackes)
{
	while (ft_lstsize((*stackes)->stack_b))
		ft_pa(*stackes);
}
