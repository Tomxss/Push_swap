/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:35:51 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 13:34:37 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

int				bulky_list(t_nums **a, t_nums **b, int i, int numbers)
{
	if (numbers <= 200)
	{
		i += bulky_med(a, b, i);
		return (i);
	}
	if (numbers <= 800)
	{
		i += bulky_large(a, b, i);
		return (i);
	}
	return (i);
}

int				three_or_five(t_nums **a, t_nums **b, int flag, int argc)
{
	int i;

	i = 0;
	if (argc == 4 && flag == 0)
		i += sort_three(a);
	if (argc == 6 && flag == 0)
		i += sort_five(a, b, i);
	if (argc == 5 && flag == 1)
		i += sort_three(a);
	if (argc == 7 && flag == 1)
		i += sort_five(a, b, i);
	return (i);
}

t_nums			*create_a_list_ps(int argc, char **argv, t_nums **a)
{
	t_nums	*hold_head;
	t_nums	*head;
	t_nums	*temp;
	int		i;

	i = 2;
	i = (argv[1][0] == '-' && argv[1][1] == 'j') ? 3 : 2;
	head = malloc(sizeof(t_nums));
	hold_head = head;
	if (argv[1][0] == '-' && argv[1][1] == 'j')
		head->num = ft_atoi_digit_confirm(argv[2], a);
	else
		head->num = ft_atoi_digit_confirm(argv[1], a);
	head->next = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(t_nums));
		temp->num = ft_atoi_digit_confirm(argv[i], a);
		temp->next = NULL;
		hold_head->next = temp;
		hold_head = hold_head->next;
		dup_check_ps(head, temp->num, a);
		i++;
	}
	return (head);
}

void			print_list_ps(t_nums *nums)
{
	while (nums != NULL)
	{
		ft_putnbr(nums->num);
		ft_putstr("\n");
		nums = nums->next;
	}
}

int				main(int argc, char **argv)
{
	t_nums	*a;
	t_nums	*b;
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	a = NULL;
	flag = (argv[1][0] == '-' && argv[1][1] == 'j') ? 1 : 0;
	a = create_a_list_ps(argc, argv, &a);
	b = NULL;
	if (a == NULL || first_confirmed_ordered(a) == 0)
		return (0);
	if (argc >= 4 && argc <= 7)
		i += three_or_five(&a, &b, flag, argc);
	if (argc >= 8 && argc <= 800)
		i += bulky_list(&a, &b, i, argc);
	if (argc >= 801)
		jumbo(&a, &b, i);
	if (final_confirmed_ordered(a, b) == 1)
		i = my_insert_sort(&a, &b, i);
	if (flag == 1)
		print_list_ps(a);
	free_a_and_b(&a, &b);
	return (0);
}
