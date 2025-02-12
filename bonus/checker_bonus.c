/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:26:00 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/12 19:07:46 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static char	**ft_create_lst(void)
{
	char	**lst;

	lst = ft_malloc(sizeof(char *) * 12);
	lst[0] = ft_strdup("sa");
	lst[1] = ft_strdup("sb");
	lst[2] = ft_strdup("ss");
	lst[3] = ft_strdup("pa");
	lst[4] = ft_strdup("pb");
	lst[5] = ft_strdup("ra");
	lst[6] = ft_strdup("rb");
	lst[7] = ft_strdup("rr");
	lst[8] = ft_strdup("rra");
	lst[9] = ft_strdup("rrb");
	lst[10] = ft_strdup("rrr");
	lst[11] = NULL;
	return (lst);
}

static void	ft_valid_instruction(char *s)
{
	char	**lst;

	lst = ft_create_lst();
	while (lst && *lst)
	{
		if (!ft_strncmp(*lst, s, ft_strlen(*lst) + 1))
			return ;
		lst++;
	}
	ft_exit(1);
}

static t_instruction	*ft_get_instructions(void)
{
	t_instruction	*res;
	char			*s;

	res = NULL;
	while (1)
	{
		s = get_next_line(0);
		if (!s)
			break ;
		s[ft_strlen(s) - 1] = '\0';
		ft_valid_instruction(s);
		ft_insadd_back(&res, ft_insnew(s));
	}
	return (res);
}

static void	ft_do_instruction(t_stackes	**stackes, char *s)
{
	char	**lst;

	lst = ft_create_lst();
	if (!ft_strncmp(lst[0], s, ft_strlen(lst[0]) + 1))
		ft_sa(*stackes);
	else if (!ft_strncmp(lst[1], s, ft_strlen(lst[1]) + 1))
		ft_sb(*stackes);
	else if (!ft_strncmp(lst[2], s, ft_strlen(lst[2]) + 1))
		ft_ss(*stackes);
	else if (!ft_strncmp(lst[3], s, ft_strlen(lst[3]) + 1))
		ft_pa(*stackes);
	else if (!ft_strncmp(lst[4], s, ft_strlen(lst[4]) + 1))
		ft_pb(*stackes);
	else if (!ft_strncmp(lst[5], s, ft_strlen(lst[5]) + 1))
		ft_ra(*stackes);
	else if (!ft_strncmp(lst[6], s, ft_strlen(lst[6]) + 1))
		ft_rb(*stackes);
	else if (!ft_strncmp(lst[7], s, ft_strlen(lst[7]) + 1))
		ft_rr(*stackes);
	else if (!ft_strncmp(lst[8], s, ft_strlen(lst[8]) + 1))
		ft_rra(*stackes);
	else if (!ft_strncmp(lst[9], s, ft_strlen(lst[9]) + 1))
		ft_rrb(*stackes);
	else
		ft_rrr(*stackes);
}

int	main(int ac, char **av)
{
	t_stackes		*stackes;
	t_instruction	*lst;
	int				aid;

	if (ac < 2)
		ft_exit(0);
	aid = 0;
	stackes = ft_malloc(sizeof(t_stackes));
	stackes->stack_a = ft_check_input(av);
	stackes->stack_b = NULL;
	stackes->instructions = NULL;
	lst = ft_get_instructions();
	while (lst)
	{
		ft_do_instruction(&stackes, lst->content);
		lst = lst->next;
	}
	if (ft_is_sorted(stackes))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_exit(0);
}
