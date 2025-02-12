/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sieve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:40:08 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:29:37 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_min(int n, int n2)
{
	if (n > n2)
		return (n2);
	return (n);
}

t_instruction	*ft_sieve(t_instruction *instructions)
{
	return (ft_sieve_aid(ft_sieve_aid(instructions, 0), 1));
}
