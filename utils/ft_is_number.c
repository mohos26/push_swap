/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:38:50 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/03 09:31:47 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_is_number(char *s)
{
	int		sing;
	long	n;

	while (*s == ' ')
		s++;
	sing = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sing = 1;
		s++;
	}
	if (!s || !*s)
		return (0);
	n = 0;
	while (*s && ft_isdigit(*s))
	{
		n *= 10;
		n += (*s) - 48;
		if (n > (2147483647L + sing))
			return (0);
		s++;
	}
	return (!*s);
}
