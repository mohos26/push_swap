/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:54:51 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/10 16:23:36 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <libc.h>

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stackes
{
	t_list		*stack_a;
	t_list		*stack_b;
}				t_stackes;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lst_del_last(t_list **lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lst_del_first(t_list **lst);
void	*ft_malloc(size_t size);
void	ft_exit(int status);
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *s, char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_swap(t_list **stack);
int		ft_push(t_list **stack_a, t_list **stack_b);
int		ft_rotate(t_list **stack);
int		ft_reverse_rotate(t_list **stack);
int		ft_sa(t_stackes *stacks);
int		ft_sb(t_stackes *stacks);
int		ft_ss(t_stackes *stacks);
int		ft_pa(t_stackes *stacks);
int		ft_pb(t_stackes *stacks);
int		ft_ra(t_stackes *stackes);
int		ft_rb(t_stackes *stackes);
int		ft_rr(t_stackes *stackes);
int		ft_rra(t_stackes *stackes);
int		ft_rrb(t_stackes *stackes);
int		ft_rrr(t_stackes *stackes);
int		ft_is_number(char *s);
t_list	*ft_check_input(char **av);
void	ft_pb_min(t_stackes **stackes);
void	ft_pa_all(t_stackes **stackes);
void	ft_pa_top(t_stackes **stackes, int i);
void	ft_pa_big(t_stackes **stackes);
int		ft_get_min(t_list *lst, int flag);
void	ft_pb_top(t_stackes **stackes, int i);
t_list	*ft_sieve(t_list *instructions);

#endif
