/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:14:38 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 13:28:42 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	swap(t_nums **head)
{
	t_nums *temp;

	if (*head == NULL)
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}
