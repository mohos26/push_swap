/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:46:54 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 18:49:58 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_print_instructions(t_instruction *lst)
{
	while (lst)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putstr_fd("\n", 1);
		lst = lst->next;
	}
}
