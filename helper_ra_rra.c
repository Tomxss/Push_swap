/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_ra_rra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:32:45 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:32:50 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		ra_x_amount(t_nums **a, int pos)
{
	int i;
	int tot;

	i = pos;
	tot = tot_b(*a);
	while (pos != 0)
	{
		rotate_a(a);
		write(1, "ra\n", 3);
		pos--;
	}
	return (i);
}

int		rra_x_amount(t_nums **a, int pos)
{
	int i;
	int tot;

	tot = tot_b(*a);
	pos = tot - pos;
	i = pos;
	while (pos != 0)
	{
		reverse_rotate_a(a);
		write(1, "rra\n", 4);
		pos--;
	}
	return (i);
}

int		a_which_x_amount(t_nums **a, int range_pos)
{
	int tot;
	int i;

	tot = 0;
	tot = tot_value(*a);
	i = 0;
	if (range_pos < tot / 2)
		i += ra_x_amount(a, range_pos);
	if (range_pos >= tot / 2)
		i += rra_x_amount(a, range_pos);
	return (i);
}
