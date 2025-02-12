/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:15:37 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 18:25:36 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*aid;
	void			*ptr;

	if (count != 0 && size > ((size_t)-1) / count)
		return (NULL);
	size *= count;
	ptr = ft_malloc(size);
	aid = ptr;
	while (size--)
		*aid++ = 0;
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	char	*head;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	res = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), 1);
	head = res;
	i = 0;
	while (s1[i])
		*res++ = s1[i++];
	i = 0;
	while (s2[i])
		*res++ = s2[i++];
	*res = '\0';
	return (head);
}
