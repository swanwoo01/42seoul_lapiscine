/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:00:10 by wyu               #+#    #+#             */
/*   Updated: 2021/09/11 21:30:03 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_num_print(char *num)
{
	char	space;

	space = ' ';
	write(1, num, 2);
	write(1, &space, 1);
	write(1, &num[2], 2);
}

void	init(char *ch_n, char *space, char *separator, char *dollar)
{
	*ch_n = '0';
	*space = ' ';
	*separator = ',';
	*dollar = '$';
}

void	ft_print_comb2(void)
{
	char	num[4];
	char	space;
	char	separator;
	char	dollar;
	int		real_num;

	init(&num[0], &space, &separator, &dollar);
	real_num = 0;
	while (1)
	{
		num[0] = '0' + real_num / 1000;
		num[1] = '0' + real_num % 1000 / 100;
		num[2] = '0' + (real_num % 100 / 10);
		num[3] = '0' + real_num % 10;
		ft_print_comb2_num_print(num);
		real_num++;
		if (real_num > 9899)
			break ;
		write(1, &separator, 2);
		write(1, &space, 1);
	}
	write(1, &dollar, 1);
}
