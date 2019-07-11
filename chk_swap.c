/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:14:38 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 09:27:38 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(s_nums **nums)
{
	t_nums *temp;

	if (*nums == NULL)
		return ;
	temp = *nums;
	*nums = (*nums)->next;
	temp->next = (*nums)->next;
	(*nums)->next = temp;
}
