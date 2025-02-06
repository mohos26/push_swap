/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:22:56 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/05 15:24:15 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	ft_swap(t_list **stack)
{
	void	*aid;

	if (!stack || !*stack || ft_lstsize(*stack) < 2)
		return (0);
	aid = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = aid;
	return (1);
}

int	ft_push(t_list **stack_a, t_list **stack_b)
{
	t_list	*aid;

	if (!stack_b || !*stack_b)
		return (0);
	if (!*stack_a)
		*stack_a = ft_lstnew((*stack_b)->content);
	else
		ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->content));
	ft_lst_del_first(stack_b);
	return (1);
}

int	ft_rotate(t_list **stack)
{
	t_list	*aid;

	if (!stack || !*stack)
		return (0);
	aid = ft_malloc(sizeof(t_list));
	aid->content = (*stack)->content;
	aid->next = NULL;
	ft_lstadd_back(stack, aid);
	ft_lst_del_first(stack);
	return (1);
}

int	ft_reverse_rotate(t_list **stack)
{
	t_list	*aid;

	if (!stack || !*stack)
		return (0);
	aid = ft_malloc(sizeof(t_list));
	aid->content = ft_lstlast(*stack)->content;
	aid->next = NULL;
	ft_lstadd_front(stack, aid);
	ft_lst_del_last(stack);
	return (1);
}
