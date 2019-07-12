/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:37:31 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:37:32 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		sort_three(t_nums **a)
{
	int t;
	int m;
	int b;
	int i;

	t = (*a)->num;
	m = (*a)->next->num;
	b = (*a)->next->next->num;
	i = 0;
	if (t > m && m < b && b > t)
		i += sort_three_sa_and_write(a);
	if (t > m && m > b && b < t)
		i += sort_three_sa_and_rra(a);
	if (t > m && m < b && b < t)
		i += sort_three_ra_and_write(a);
	if (t < m && m > b && b > t)
		i += sort_three_sa_and_ra(a);
	if (t < m && m > b && b < t)
		i += sort_three_rra_and_write(a);
	if (first_confirmed_ordered(*a) == 0)
		return (i);
	return (0);
}
