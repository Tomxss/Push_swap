/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_confirmed_ordered.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:31:39 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:31:45 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		first_confirmed_ordered(t_nums *nums)
{
	while (nums)
	{
		if (nums->next)
		{
			if (nums->num > nums->next->num)
				return (1);
		}
		nums = nums->next;
	}
	return (0);
}
