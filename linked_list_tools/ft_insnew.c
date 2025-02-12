/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:37 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:42:52 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_instruction	*ft_insnew(void *content)
{
	t_instruction	*res;

	res = (t_instruction *) ft_malloc(sizeof(t_instruction));
	res->content = content;
	res->next = NULL;
	return (res);
}
