/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:07:20 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/03 11:54:53 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static t_list	*ft_check_iteration(int c, int flag)
{
	static t_list	*lst;
	t_list			*aid;
	int				*n;

	if (flag)
		return (lst);
	if (!lst)
	{
		n = ft_malloc(sizeof(int));
		*n = c;
		lst = ft_lstnew(n);
		return (NULL);
	}
	aid = lst;
	while (aid)
	{
		n = aid->content;
		if (*n == c)
			ft_exit(1);
		aid = aid->next;
	}
	n = ft_malloc(sizeof(int));
	*n = c;
	ft_lstadd_back(&lst, ft_lstnew(n));
	return (NULL);
}

t_list	*ft_check_input(char **av)
{
	char	**lst;

	av++;
	while (*av)
	{
		lst = ft_split(*av, ' ');
		if (!lst || !*lst)
			ft_exit(1);
		while (*lst)
		{
			if (!ft_is_number(*lst))
				ft_exit(1);
			ft_check_iteration(atoi(*lst), 0);
			lst++;
		}
		av++;
	}
	return (ft_check_iteration(0, 1));
}
