/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:55 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 15:37:55 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_num(char *base)
{
	int	idx1;
	int	idx2;

	idx1 = 0;
	while (base[idx1])
	{
		if (base[idx1] == '-' || base[idx1] == '+')
			return (0);
		idx2 = idx1 + 1;
		while (base[idx2])
		{
			if (base[idx1] == base[idx2])
				return (0);
			idx2++;
		}
		idx1++;
	}
	if (idx1 <= 1)
		return (0);
	else
		return (idx1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_num;

	base_num = ft_base_num(base);
	if (!base_num)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / base_num) * -1, base);
		ft_putchar(base[(nbr % base_num) *(-1)]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr * -1, base);
	}
	else if (nbr >= base_num)
	{
		ft_putnbr_base(nbr / base_num, base);
		ft_putchar(base[nbr % base_num]);
	}
	else
		ft_putchar(base[nbr]);
}
