/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:00:10 by wyu               #+#    #+#             */
/*   Updated: 2021/09/13 19:58:56 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_num_print(char *num)
{
	write(1, num, 2);
	write(1, " ", 1);
	write(1, &num[2], 2);
}

void	ft_print_comb2(void)
{
	char	num[4];
	int		real_num;

	real_num = 0;
	while (1)
	{
		while (real_num / 100 >= real_num % 100)
			real_num++;
		num[0] = '0' + real_num / 1000;
		num[1] = '0' + real_num % 1000 / 100;
		num[2] = '0' + (real_num % 100 / 10);
		num[3] = '0' + real_num % 10;
		ft_print_comb2_num_print(num);
		real_num++;
		if (real_num > 9899)
			break ;
		write(1, ", ", 2);
	}
}
