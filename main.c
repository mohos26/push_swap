/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:01:08 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/06 13:12:46 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sort_three(t_stackes **stackes)
{
	t_list	*aid;
	int		lst[3];

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
		if ((lst[0] > lst[1] && lst[0] < lst[2]))
			ft_sa(*stackes);
		else if (lst[0] < lst[1] && lst[0] > lst[2])
			ft_rra(*stackes);
		else if ((lst[0] > lst[1] && lst[1] < lst[2]))
			ft_ra(*stackes);
		else if (lst[0] > lst[1] && lst[1] > lst[2])
		{
			ft_sa(*stackes);
			ft_rra(*stackes);
		}
		else if (lst[0] < lst[1] && lst[1] > lst[2])
		{
			ft_rra(*stackes);
			ft_sa(*stackes);
		}
	}
}

int	ft_is_sorted(t_stackes *stackes)
{
	int 	*lst2[2];
	t_list *lst;

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

int main(int ac, char **av)
{
	t_stackes	*stackes;
	t_list		*lst;

	stackes = ft_malloc(sizeof(t_stackes));
	if (ac < 1)
		ft_exit(1);
	stackes->stack_a = ft_check_input(av);
	stackes->stack_b = NULL;
	ft_lst_create(&stackes, 1);
	while (!ft_is_sorted(stackes))
	{
		if (!ft_lstsize(stackes->stack_a))
		{
			ft_pa_all(&stackes);
		}
		else
			ft_lst_create(&stackes, 0);
	}
	puts("****************");
	lst = stackes->stack_a;
	while (lst)
	{
		int *n = lst->content;
		printf("%d\n", *n);
		lst = lst->next;
	}
	puts("************");
	lst = stackes->stack_b;
	while (lst)
	{
		int *n = lst->content;
		printf("%d\n", *n);
		lst = lst->next;
	}
	ft_exit(0);
}
