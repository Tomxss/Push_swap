/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_n_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 10:37:57 by tcoetzee          #+#    #+#             */
/*   Updated: 2019/07/12 10:37:58 by tcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_header.h"

char			**str_n(int argc, char **argv)
{
	if (argc < 2 || !argv[1][0])
		exit(1);
	if (argc == 3 && !argv[2][0])
		exit(1);
	if (argv[1][0] == '-' && argv[1][1] == 'n')
	{
		if (argc == 3)
			return (ft_strsplit(argv[2], ' '));
		else
			return (&argv[2]);
	}
	else
	{
		if (argc == 2)
			return (ft_strsplit(argv[1], ' '));
		else
			return (&argv[1]);
	}
	return (&argv[1]);
}
