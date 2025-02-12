/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:37 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:42:39 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *) ft_malloc(sizeof(t_list));
	res->content = content;
	res->next = NULL;
	return (res);
}
