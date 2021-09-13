/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 20:37:18 by wyu               #+#    #+#             */
/*   Updated: 2021/09/13 19:36:46 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	num_plus(char *num)
{
	num[2]++;
	if (num[2] > '9')
	{
		num[1]++;
		num[2] = '0';
	}
	if (num[1] > '9')
	{
		num[0]++;
		num[1] = '0';
	}
}

void	ft_print_comb(void)
{
	char	num[3];
	char	separator[2];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	separator[0] = ',';
	separator[1] = ' ';
	while (num[0] != '7' || num[1] != '8' || num[2] != '9')
	{
		if (num[0] != num[1] && num[1] != num[2] && \
		num[0] < num[1] && num[1] < num[2])
		{
			write(1, num, 3);
			write(1, separator, 2);
		}
		num_plus(num);
	}
	write(1, num, 3);
}
