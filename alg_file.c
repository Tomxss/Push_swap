/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:21:23 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 13:36:16 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		push_and_find(t_nums **a, t_nums **b, int small)
{
	push_b(a, b);
	write(1, "pb\n", 3);
	if (*a)
		small = min_finder(*a, small);
	return (small);
}

int		push_and_i(t_nums **a, t_nums **b)
{
	int i;

	i = 0;
	while (*b)
	{
		push_a(a, b);
		write(1, "pa\n", 3);
		i++;
	}
	return (i);
}

int		ra_or_rra_two(t_nums **a, int tot_minus_pos, int i)
{
	while (tot_minus_pos > 0)
	{
		revrotate(a);
		write(1, "rra\n", 4);
		tot_minus_pos--;
		i++;
	}
	return (i);
}

int		ra_or_rra(t_nums **a, int tot, int pos)
{
	int i;
	int half;
	int	tot_minus_pos;

	i = 0;
	half = tot / 2;
	tot_minus_pos = tot - pos;
	if (pos <= half)
	{
		while (pos > 0)
		{
			rotate(a);
			write(1, "ra\n", 3);
			pos--;
			i++;
		}
	}
	if (pos > half)
		i += ra_or_rra_two(a, tot_minus_pos, i);
	return (i);
}

int		pos_finder(t_nums *a, int pos, int small)
{
	int i;

	i = -1;
	while (a)
	{
		i++;
		if (small == a->num)
			pos = i;
		a = a->next;
	}
	return (pos);
}
