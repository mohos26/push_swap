/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:52:04 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 19:00:41 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

size_t	ft_strlen(const char *s)
{
	size_t	lenght;

	lenght = 0;
	while (*s++)
		lenght++;
	return (lenght);
}
