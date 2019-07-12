/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:14:38 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 13:25:58 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
