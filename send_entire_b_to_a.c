/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_entire_b_to_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:36:48 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 14:23:51 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		rb_or_rrb_one_hun_two(t_nums **a, t_nums **b, int pos, int tot)
{
	int i;
	int biggest;

	i = 0;
	biggest = biggest_finder(*b);
	while (tot > pos)
	{
		revrotate(b);
		write(1, "rrb\n", 4);
		pos++;
		i++;
	}
	if ((*b)->num == biggest)
	{
		push_a(a, b);
		write(1, "pa\n", 3);
	}
	return (i);
}

int		rb_or_rrb_one_hun_one(t_nums **a, t_nums **b, int pos, int i)
{
	while (pos > 0)
	{
		rotate(b);
		write(1, "rb\n", 3);
		pos--;
		i++;
	}
	if (pos == 0)
	{
		push_a(a, b);
		write(1, "pa\n", 3);
		i++;
	}
	return (i);
}

int		rb_or_rrb_one_hundered(t_nums **a, t_nums **b, int tot)
{
	int i;
	int half;
	int	pos;
	int biggest;

	i = 0;
	while (*b)
	{
		tot = tot_value(*b);
		half = tot / 2;
		pos = 0;
		biggest = biggest_finder(*b);
		pos = pos_finder(*b, pos, biggest);
		if (pos <= half)
			i += rb_or_rrb_one_hun_one(a, b, pos, i);
		if (pos > half)
			i += rb_or_rrb_one_hun_two(a, b, pos, tot);
	}
	return (i);
}
