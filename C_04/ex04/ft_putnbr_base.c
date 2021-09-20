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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (s1 - s2);
}

int	ft_print_base_except(int nb, char *base)
{
	if (ft_strcmp(base, "2") \
		&& ft_strcmp(base, "8") \
		&& ft_strcmp(base, "10") \
		&& ft_strcmp(base, "16"))
		return (1);
	if (!nb)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (nb == -2147483648)
	{
		if (!ft_strcmp(base, "16"))
			write(1, "-80000000", 9);
		else if (!ft_strcmp(base, "10"))
			write(1, "-2147483648", 11);
		else if (!ft_strcmp(base, "8"))
			write(1, "-npppppppppp", 12);
		else if (!ft_strcmp(base, "2"))
			write(1, "-10000000000000000000000000000000", 33);
		return (1);
	}
	return (0);
}

void	ft_putnbr_base_rec(int nb, char *base, char *num_arr, int radix)
{
	int	div;
	int	mod;

	if (!nb)
		return ;
	mod = nb % radix;
	div = nb / radix;
	ft_putnbr_base_rec(div, base, num_arr, radix);
	write(1, &num_arr[mod], 1);
}

int	ft_putnbr_base_radix(char *base, char **num_arr)
{
	int	radix;

	if (!ft_strcmp(base, "16"))
	{
		radix = 16;
		*num_arr = "0123456789ABCDEF";
	}
	else if (!ft_strcmp(base, "10"))
	{
		radix = 10;
		*num_arr = "0123456789";
	}
	else if (!ft_strcmp(base, "8"))
	{
		radix = 8;
		*num_arr = "poneyvif";
	}
	else if (!ft_strcmp(base, "2"))
	{
		radix = 2;
		*num_arr = "01";
	}
	return (radix);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		flag;
	char	*num_arr;
	int		radix;

	flag = ft_print_base_except(nb, base);
	if (flag)
		return ;
	radix = ft_putnbr_base_radix(base, &num_arr);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_putnbr_base_rec(nb, base, num_arr, radix);
}
