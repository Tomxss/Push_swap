/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:29:22 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 13:32:49 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int			is_space(char c)
{
	if (c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\f' ||
			c == '\r')
		return (1);
	return (0);
}

void		command_not_found(void)
{
	ft_putstr("\33[31mError\033[0330m\n");
	exit(1);
}

void		apply_command(char *str, t_nums **a, t_nums **b)
{
	if (ft_strcmp(str, "sa") == 0)
		swap(a);
	else if (ft_strcmp(str, "sb") == 0)
		swap(b);
	else if (ft_strcmp(str, "ss") == 0)
		ss(a, b);
	else if (ft_strcmp(str, "pa") == 0)
		push_a(a, b);
	else if (ft_strcmp(str, "pb") == 0)
		push_b(a, b);
	else if (ft_strcmp(str, "ra") == 0)
		rotate(a);
	else if (ft_strcmp(str, "rb") == 0)
		rotate(b);
	else if (ft_strcmp(str, "rr") == 0)
		rr(a, b);
	else if (ft_strcmp(str, "rra") == 0)
		revrotate(a);
	else if (ft_strcmp(str, "rrb") == 0)
		revrotate(b);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(a, b);
	else
		command_not_found();
}
