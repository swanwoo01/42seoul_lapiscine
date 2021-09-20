/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:48 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 15:37:48 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_print_except(int nb)
{
	if (!nb)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr_rec(int nb)
{
	int	div;
	int	mod;

	if (!nb)
		return ;
	mod = nb % 10;
	div = nb / 10;
	ft_putnbr_rec(div);
	ft_putchar('0' + mod);
}

void	ft_putnbr(int nb)
{
	int	flag;

	flag = ft_print_except(nb);
	if (flag)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_putnbr_rec(nb);
}
