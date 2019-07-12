/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_finder.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:34:37 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:35:03 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		min_finder(t_nums *a, int min)
{
	min = a->num;
	while (a != NULL)
	{
		if (min >= a->num)
			min = a->num;
		a = a->next;
	}
	return (min);
}
