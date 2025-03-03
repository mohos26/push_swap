/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rules.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:22:56 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:36:01 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_swap(t_list **stack)
{
	void	*aid;

	if (!stack || !*stack || ft_lstsize(*stack) < 2)
		return ;
	aid = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = aid;
}

void	ft_push(t_list **stack_a, t_list **stack_b)
{
	if (!stack_b || !*stack_b)
		return ;
	if (!*stack_a)
		*stack_a = ft_lstnew((*stack_b)->content);
	else
		ft_lstadd_front(stack_a, ft_lstnew((*stack_b)->content));
	ft_lst_del_first(stack_b);
}

void	ft_rotate(t_list **stack)
{
	t_list	*aid;

	if (!stack || !*stack)
		return ;
	aid = ft_malloc(sizeof(t_list));
	aid->content = (*stack)->content;
	aid->next = NULL;
	ft_lstadd_back(stack, aid);
	ft_lst_del_first(stack);
}

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*aid;

	if (!stack || !*stack)
		return ;
	aid = ft_malloc(sizeof(t_list));
	aid->content = ft_lstlast(*stack)->content;
	aid->next = NULL;
	ft_lstadd_front(stack, aid);
	ft_lst_del_last(stack);
}
