/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:01:08 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 20:21:36 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	ft_aid(t_stackes *stackes, int *lst)
{
	if ((lst[0] > lst[1] && lst[0] < lst[2]))
		ft_sa(stackes);
	else if (lst[0] < lst[1] && lst[0] > lst[2])
		ft_rra(stackes);
	else if ((lst[0] > lst[1] && lst[1] < lst[2]))
		ft_ra(stackes);
	else if (lst[0] > lst[1] && lst[1] > lst[2])
	{
		ft_sa(stackes);
		ft_rra(stackes);
	}
	else if (lst[0] < lst[1] && lst[1] > lst[2])
	{
		ft_rra(stackes);
		ft_sa(stackes);
	}
}

void	ft_sort_three(t_stackes **stackes)
{
	int		lst[3];
	t_list	*aid;

	aid = (*stackes)->stack_a;
	if (ft_lstsize(aid) == 2)
	{
		if (aid->content > aid->next->content)
			ft_sa(*stackes);
	}
	else if (ft_lstsize(aid) == 3)
	{
		lst[0] = *(aid->content);
		lst[1] = *(aid->next->content);
		lst[2] = *(aid->next->next->content);
		ft_aid(*stackes, lst);
	}
}

int	ft_is_sorted(t_stackes *stackes)
{
	int		*lst2[2];
	t_list	*lst;

	lst2[0] = NULL;
	lst = stackes->stack_a;
	while (lst)
	{
		if (!(lst2[0]))
			lst2[0] = lst->content;
		else
		{
			lst2[1] = lst->content;
			if (*lst2[1] < *lst2[0])
				return (0);
			lst2[0] = lst2[1];
		}
		lst = lst->next;
	}
	return (!(stackes->stack_b && ft_lstsize(stackes->stack_b)));
}

int	ft_get_min(t_list *lst, int flag)
{
	int	aid;
	int	i;
	int	j;

	i = 0;
	j = 0;
	aid = *(lst->content);
	while (lst)
	{
		if (aid > *(lst->content))
		{
			aid = *(lst->content);
			j = i;
		}
		lst = lst->next;
		i++;
	}
	if (flag)
		return (aid);
	return (j);
}

int	main(int ac, char **av)
{
	t_stackes	*stackes;
	int			aid;

	if (ac < 1)
		ft_exit(1);
	aid = 0;
	stackes = ft_malloc(sizeof(t_stackes));
	stackes->stack_a = ft_check_input(av);
	stackes->stack_b = NULL;
	stackes->instructions = NULL;
	while (!ft_is_sorted(stackes))
	{
		if (aid)
		{
			ft_pa_big(&stackes);
			if (!stackes->stack_b)
				ft_pa_top(&stackes, ft_get_min(stackes->stack_a, 0));
		}
		else if (ft_lstsize(stackes->stack_a) <= 3 && !aid++)
			ft_sort_three(&stackes);
		else
			ft_pb_min(&stackes);
	}
	ft_print_instructions(ft_sieve(stackes->instructions));
	ft_exit(0);
}
