/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_solutions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:37:44 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 14:25:07 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		sort_three_sa_and_rra(t_nums **a)
{
	int i;

	i = 2;
	swap(a);
	revrotate(a);
	write(1, "sa\n", 3);
	write(1, "rra\n", 4);
	return (i);
}

int		sort_three_sa_and_ra(t_nums **a)
{
	int i;

	i = 2;
	swap(a);
	rotate(a);
	write(1, "sa\n", 3);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_sa_and_write(t_nums **a)
{
	int i;

	i = 1;
	swap(a);
	write(1, "sa\n", 3);
	return (i);
}

int		sort_three_ra_and_write(t_nums **a)
{
	int i;

	i = 1;
	rotate(a);
	write(1, "ra\n", 3);
	return (i);
}

int		sort_three_rra_and_write(t_nums **a)
{
	int i;

	i = 1;
	revrotate(a);
	write(1, "rra\n", 4);
	return (i);
}
