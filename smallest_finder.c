/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest_finder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:37:00 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:37:01 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

long	smallest_finder(t_nums *b)
{
	int smallest;

	smallest = b->num;
	while (b != NULL)
	{
		if (smallest >= b->num)
			smallest = b->num;
		b = b->next;
	}
	return (smallest);
}
