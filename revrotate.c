/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_revrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:33:04 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 13:32:24 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

void	revrotate(t_nums **head)
{
	t_nums *tmp;
	t_nums *tail;

	tail = *head;
	while (tail->next->next)
		tail = tail->next;
	tmp = tail->next;
	tail->next = NULL;
	tmp->next = *head;
	*head = tmp;
}
