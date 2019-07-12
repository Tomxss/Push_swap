/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_pb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:00:41 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 13:30:37 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	push_b(t_nums **a, t_nums **b)
{
	t_nums	*bot_a;

	if (*a == NULL)
		return ;
	bot_a = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = bot_a;
}