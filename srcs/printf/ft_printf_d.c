/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgigault <jgigault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:34:07 by jgigault          #+#    #+#             */
/*   Updated: 2015/01/10 12:58:39 by jgigault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tmp/printf.h"
#include <stdlib.h>
#include <stdio.h>

int				main(int argc, char **argv)
{
	int		ret;

	ret = -999;
	if (argv[1][0] == 'h')
	{
		ret = ft_printf(argv[2], atoi(argv[3]));
	}
	else if (argv[1][0] == 'l')
	{
		ret = ft_printf(argv[2], atoll(argv[3]));
	}
	else
	{
		if (argc == 3)
			ret = ft_printf(argv[2], atol(argv[3]));
		else if (argc == 4)
			ret = ft_printf(argv[2], atol(argv[3]), atol(argv[4]));
		else if (argc == 5)
			ret = ft_printf(argv[2], atol(argv[3]), atol(argv[4]), atol(argv[5]));
		else if (argc == 6)
			ret = ft_printf(argv[2], atol(argv[3]), atol(argv[4]), atol(argv[5]), atol(argv[6]));
		else if (argc == 7)
			ret = ft_printf(argv[2], atol(argv[3]), atol(argv[4]), atol(argv[5]), atol(argv[6]), atol(argv[7]));
	}
	printf("|%d", ret);
	return (0);
}
