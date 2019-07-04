/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:24:49 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/04 11:28:52 by tcoetzee         ###   ########.fr       */
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

void			swap_a(t_nums **nums);

#endif
