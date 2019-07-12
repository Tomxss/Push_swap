/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_confirmed_ordered.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:29:06 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:29:11 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int		final_confirmed_ordered(t_nums *nums, t_nums *b)
{
	if (b)
		return (1);
	if (!nums)
		return (1);
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
