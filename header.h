/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:54:51 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 21:35:47 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUFFER_SIZE 42

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
}					t_list;

typedef struct s_instruction
{
	char					*content;
	struct s_instruction	*next;
}							t_instruction;

typedef struct s_stackes
{
	t_list			*stack_a;
	t_list			*stack_b;
	t_instruction	*instructions;
}					t_stackes;

/* The Rules*/
void			ft_sa(t_stackes *stacks);
void			ft_sb(t_stackes *stacks);
void			ft_ss(t_stackes *stacks);
void			ft_pa(t_stackes *stacks);
void			ft_pb(t_stackes *stacks);
void			ft_ra(t_stackes *stackes);
void			ft_rb(t_stackes *stackes);
void			ft_rr(t_stackes *stackes);
void			ft_rra(t_stackes *stackes);
void			ft_rrb(t_stackes *stackes);
void			ft_rrr(t_stackes *stackes);
void			ft_swap(t_list **stack);
void			ft_rotate(t_list **stack);
void			ft_reverse_rotate(t_list **stack);
void			ft_push(t_list **stack_a, t_list **stack_b);

void			ft_exit(int status);
int				ft_min(int n, int n2);
int				ft_is_number(char *s);
char			*get_next_line(int fd);
int				ft_lstsize(t_list *lst);
void			*ft_malloc(size_t size);
t_list			*ft_lstlast(t_list *lst);
int				ft_atoi(const char *str);
size_t			ft_strlen(const char *s);
t_instruction	*ft_insnew(void *content);
t_list			*ft_lstnew(void *content);
t_list			*ft_check_input(char **av);
char			*ft_strdup(const char *s1);
void			ft_lst_del_last(t_list **lst);
void			ft_putstr_fd(char *s, int fd);
void			ft_pb_min(t_stackes **stackes);
void			ft_pa_all(t_stackes **stackes);
void			ft_pa_big(t_stackes **stackes);
void			ft_lst_del_first(t_list **lst);
char			**ft_split(const char *s, char c);
int				ft_get_min(t_list *lst, int flag);
void			ft_pa_top(t_stackes **stackes, int i);
void			ft_pb_top(t_stackes **stackes, int i);
t_instruction	*ft_sieve(t_instruction *instructions);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_print_instructions(t_instruction *lst);
t_instruction	*ft_sieve_aid(t_instruction *lst, int flag2);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			ft_insadd_back(t_instruction **lst, t_instruction *new);
char			*ft_strjoin(char *s1, char *s2);
void			*ft_calloc(size_t count, size_t size);
int				ft_is_sorted(t_stackes *stackes);

#endif
