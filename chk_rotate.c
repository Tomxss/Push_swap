/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:21:26 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 12:27:57 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.c"

void	rotate(t_nums **head)
{
	t_nums	*tail;
	t_nums	*tmp;

	tmp = *head;
	tail = *head;
	while (tail->next)
		tail = tail->next;
	*head = (*head)->next;
	tmp->next = NULL;
	tail->next = tmp;
}
/*
 * 			
 *		 A[9]-[8]-[5]-[0]
 *		
 *
 *
 *
 *
 *
 *
 *
 */
