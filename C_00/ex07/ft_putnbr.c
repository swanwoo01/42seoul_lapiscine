/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:31:21 by wyu               #+#    #+#             */
/*   Updated: 2021/09/13 10:31:21 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	find_digit(int nb)
{
	int	digit;

	digit = 1;
	while (nb / digit)
	{
		digit *= 10;
		if (digit == 1000000000)
			if (nb / digit)
				return (digit);
	}
	digit /= 10;
	return (digit);
}

void	min_n(void)
{
	write(1, "-2147483648", 11);
}

int	except(int *nb)
{
	if (!*nb)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (*nb == -2147483648)
	{
		min_n();
		return (1);
	}
	else if (*nb < 0)
	{
		write(1, "-", 1);
		*nb *= -1;
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int		digit;
	int		div;
	int		mod;
	char	write_n;

	if (except(&nb))
		return ;
	digit = find_digit(nb);
	while (digit != 1)
	{
		div = nb / digit;
		mod = nb % digit;
		write_n = '0' + div;
		write(1, &write_n, 1);
		nb = mod;
		digit /= 10;
	}
	write_n = '0' + nb;
	write(1, &write_n, 1);
}
