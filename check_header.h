/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:24:49 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/11 14:32:03 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HEADER_H
# define CHECK_HEADER_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_nums
{
	long			num;
	struct s_nums	*next;
}				t_nums;

void			swap(t_nums **head);
void			ss(t_nums **a, t_nums **b);
void			push_a(t_nums **a, t_nums **b);
void			push_b(t_nums **a, t_nums **b);
void			rotate(t_nums **head);
void			rr(t_nums **a, t_nums **b);
void			revrotate(t_nums **head);
void			rrr(t_nums **a, t_nums **b);

#endif
