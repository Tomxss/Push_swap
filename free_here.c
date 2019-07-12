/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_here.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:31:56 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:32:15 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	free_a_and_b(t_nums **a, t_nums **b)
{
	free_here(a);
	free_here(b);
}

void	free_here(t_nums **all)
{
	t_nums *tmp;

	while (*all)
	{
		tmp = *all;
		tmp->num = 0;
		(*all) = (*all)->next;
		free(tmp);
	}
}
