/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:23:54 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:24:53 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long	biggest_finder(t_nums *a)
{
	int biggest;

	biggest = a->num;
	while (a != NULL)
	{
		if (biggest <= a->num)
			biggest = a->num;
		a = a->next;
	}
	return (biggest);
}
