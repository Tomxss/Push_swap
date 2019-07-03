/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:00:00 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/03 11:46:35 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	swap_a(t_nums ** nums)
{
	t_nums *temp;

	if (*nums == NULL)			//Stack A | Temp
		return ;
	temp = *nums; 				//get header address (first val)
	*nums = (*nums)->next; 		//Get Next
	temp->next = (*nums)->next;	//Temp = Stack A
	(*nums)->next = temp;		//Stack A = Temp
}
