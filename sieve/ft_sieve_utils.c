/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sieve_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoussas <mhoussas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:23:12 by mhoussas          #+#    #+#             */
/*   Updated: 2025/02/11 16:29:27 by mhoussas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static char	**ft_create_lst(int flag)
{
	char	**ins;

	ins = ft_malloc(3 * sizeof(char *));
	if (!flag)
	{
		ins[0] = ft_strdup("ra");
		ins[1] = ft_strdup("rb");
		ins[2] = ft_strdup("rr");
		return (ins);
	}
	ins[0] = ft_strdup("rra");
	ins[1] = ft_strdup("rrb");
	ins[2] = ft_strdup("rrr");
	return (ins);
}

static t_instruction	*ft_optimize_rotations(t_instruction *lst, int flag)
{
	t_instruction	*res;
	int				lens[2];
	char			*aid2;
	char			**ins;
	int				aid;

	ins = ft_create_lst(flag);
	res = NULL;
	lens[0] = 0;
	lens[1] = 0;
	while (lst)
	{
		lens[!!ft_strncmp((lst->content), ins[0], 3)]++;
		lst = lst->next;
	}
	aid = ft_min(lens[0], lens[1]);
	while (aid--)
		ft_insadd_back(&res, ft_insnew(ins[2]));
	aid2 = ins[1];
	if (lens[0] > lens[1])
		aid2 = ins[0];
	aid = (lens[0] + lens[1]) - 2 * ft_min(lens[0], lens[1]);
	while (aid--)
		ft_insadd_back(&res, ft_insnew(aid2));
	return (res);
}

static int	ft_aid2(char *s, char **ins,
	t_instruction **aid, t_instruction **res)
{
	int	n;

	n = 0;
	if ((!ft_strncmp(s, ins[0], 3) || !ft_strncmp(s, ins[1], 3)))
	{
		n = 1;
		ft_insadd_back(aid, ft_insnew(s));
	}
	else
		ft_insadd_back(res, ft_insnew(s));
	return (n);
}

static int	ft_aid3(t_instruction **res, t_instruction **aid, int flag, char *s)
{
	ft_insadd_back(res, ft_optimize_rotations(*aid, flag));
	ft_insadd_back(res, ft_insnew(s));
	*aid = NULL;
	return (0);
}

t_instruction	*ft_sieve_aid(t_instruction *lst, int flag2)
{
	t_instruction	*res;
	t_instruction	*aid;
	char			**ins;
	int				flag;

	ins = ft_create_lst(flag2);
	aid = NULL;
	res = NULL;
	while (lst)
	{
		if (flag)
		{
			if (!ft_strncmp((lst->content), ins[0], 3)
				|| !ft_strncmp((lst->content), ins[1], 3))
				ft_insadd_back(&aid, ft_insnew(lst->content));
			else
				flag = ft_aid3(&res, &aid, flag2, lst->content);
		}
		else
			flag = ft_aid2(lst->content, ins, &aid, &res);
		lst = lst->next;
	}
	return (ft_insadd_back(&res, ft_optimize_rotations(aid, flag2)), res);
}
