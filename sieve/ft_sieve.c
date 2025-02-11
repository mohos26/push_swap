/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sieve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:40:08 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 13:57:00 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static int	ft_min(int n, int n2)
{
	if (n > n2)
		return (n2);
	return (n);
}

static t_instruction	*ft_aid(t_instruction *lst)
{
	t_instruction	*res;
	int		len_a, len_b;
	char	*aid2;
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
		ft_insadd_back(&res, ft_insnew("rr"));
	if (len_a > len_b)
		aid2 = ft_strdup("ra");
	else
		aid2 = ft_strdup("rb");
	aid = (len_a + len_b) - 2 * ft_min(len_a, len_b);
	while (aid--)
		ft_insadd_back(&res, ft_insnew(aid2));
	return (res);
}

static t_instruction	*ft_aid2(t_instruction *lst)
{
	t_instruction	*res;
	int		len_a, len_b;
	char	*aid2;
	int		aid;

	res = NULL;
	len_a = 0;
	len_b = 0;
	while (lst)
	{
		if (!ft_strncmp((lst->content), "rra", 3))
			len_a++;
		else
			len_b++;
		lst = lst->next;
	}
	aid = ft_min(len_a, len_b);
	while (aid--)
		ft_insadd_back(&res, ft_insnew("rrr"));
	if (len_a > len_b)
		aid2 = ft_strdup("rra");
	else
		aid2 = ft_strdup("rrb");
	aid = (len_a + len_b) - 2 * ft_min(len_a, len_b);
	while (aid--)
		ft_insadd_back(&res, ft_insnew(aid2));
	return (res);
}

t_instruction	*ft_sieve(t_instruction *instructions)
{
	t_instruction	*res;
	t_instruction	*aid;
	t_instruction	*lst;
	int		flag;

	flag = 0;
	aid = NULL;
	res = NULL;
	lst = instructions;
	while (lst)
	{
		if (!flag && (!ft_strncmp((lst->content), "ra", 2) || !ft_strncmp((lst->content), "rb", 2)))
		{
			flag = 1;
			ft_insadd_back(&aid, ft_insnew(lst->content));
		}
		else if (flag)
		{
			if (!ft_strncmp((lst->content), "ra", 2) || !ft_strncmp((lst->content), "rb", 2))
				ft_insadd_back(&aid, ft_insnew(lst->content));
			else
			{
				flag = 0;
				ft_insadd_back(&res, ft_aid(aid));
				ft_insadd_back(&res, ft_insnew(lst->content));
				aid = NULL;
			}
		}
		else
			ft_insadd_back(&res, ft_insnew(lst->content));
		lst = lst->next;
	}
	ft_insadd_back(&res, ft_aid(aid));
	flag = 0;
	aid = NULL;
	lst = res;
	res = NULL;
	while (lst)
	{
		if (!flag && (!ft_strncmp((lst->content), "rra", 3) || !ft_strncmp((lst->content), "rrb", 3)))
		{
			flag = 1;
			ft_insadd_back(&aid, ft_insnew(lst->content));
		}
		else if (flag)
		{
			if (!ft_strncmp((lst->content), "rra", 3) || !ft_strncmp((lst->content), "rrb", 3))
				ft_insadd_back(&aid, ft_insnew(lst->content));
			else
			{
				flag = 0;
				ft_insadd_back(&res, ft_aid2(aid));
				ft_insadd_back(&res, ft_insnew(lst->content));
				aid = NULL;
			}
		}
		else
			ft_insadd_back(&res, ft_insnew(lst->content));
		lst = lst->next;
	}
	ft_insadd_back(&res, ft_aid2(aid));
	return (res);
}
