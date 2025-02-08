/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sieve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:40:08 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/08 18:14:45 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_min(int n, int n2)
{
	if (n > n2)
		return (n2);
	return (n);
}

static t_list	*ft_aid(t_list *lst)
{
	t_list	*res;
	int		len_a, len_b;
	char	aid2;
	int		aid;

	res = NULL;
	len_a = 0;
	len_b = 0;
	while (lst)
	{
		if (!ft_strncmp((lst->content), "ra", 2))
			len_a++;
		else
			len_b++;
		lst = lst->next;
	}
	aid = ft_min(len_a, len_b);
	while (aid--)
		ft_lstadd_back(&res, ft_lstnew("rr"));
	if (len_a > len_b)
		aid2 = "ra";
	else
		aid2 = "rb";
	aid = len_a - aid + len_b - aid;
	while (aid--)
		ft_lstadd_back(&res, ft_lstnew(aid2));
	return (res);
}

t_list	*ft_sieve(t_list *instructions)
{
	t_list	*res;
	t_list	*aid;
	t_list	*lst;
	int		flag;

	flag = 0;
	aid = NULL;
	res = NULL;
	lst = instructions;
	while (lst)
	{
		if (!flag && (!ft_strncmp((lst->content), "ra", 2) || !ft_strncmp((lst->content), "ra", 2)))
		{
			flag = 1;
			ft_lstadd_back(&aid, ft_lstnew(lst->content));
		}
		else if (flag)
		{
			if (!ft_strncmp((lst->content), "ra", 2) || !ft_strncmp((lst->content), "ra", 2))
				ft_lstadd_back(&aid, ft_lstnew(lst->content));
			else
			{
				flag = 0;
				ft_lstadd_back(&res, ft_aid(aid));
				ft_lstadd_back(&res, ft_lstnew(lst->content));
				aid = NULL;
			}
		}
		else
			ft_lstadd_back(&res, ft_lstnew(lst->content));
		lst = lst->next;
	}
	return (res);
}