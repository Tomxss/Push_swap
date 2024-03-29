/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:27:23 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 13:34:54 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

t_nums			*create_a_list_c(int argc, char **argv, t_nums **a)
{
	t_nums	*hold_head;
	t_nums	*head;
	t_nums	*temp;
	int		i;

	i = 2;
	head = malloc(sizeof(t_nums));
	hold_head = head;
	head->num = ft_atoi_digit_confirm_c(argv[1], a);
	head->next = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(t_nums));
		temp->num = ft_atoi_digit_confirm_c(argv[i], a);
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		dup_check_c(head, temp->num, a);
		i++;
	}
	return (head);
}

void			print_ok_if_ordered(void)
{
	ft_putstr("\033[32mOK\033[0m\n");
	exit(1);
}

int				main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;

	if (argc < 2)
		return (0);
	a = create_a_list_c(argc, argv, &a);
	b = NULL;
	if (a == NULL)
		return (0);
	grab_command(&a, &b);
	free_here(&a);
	free_here(&b);
	return (0);
}
