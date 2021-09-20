/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:52 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 15:37:52 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_space_remove(char **str)
{
	while (**str == ' ' || **str == '\t' || **str == '\n' || \
			**str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
}

int	ft_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_len(char *str)
{
	int	len;

	len = 0;
	while ('0' <= *str && *str <= '9')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_atoi_rec(char *str, int digit)
{
	int	rec_num;
	int	real_num;

	if (!digit)
		return (0);
	real_num = 0;
	real_num += ft_atoi_rec(str + 1, digit / 10);
	real_num += (*str - '0') * digit;
	return (real_num);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	len;
	int	digit;
	int	i;
	int	real_num;

	ft_space_remove(&str);
	sign = ft_sign(&str);
	len = ft_atoi_len(str);
	digit = 1;
	while (len > 1)
	{
		digit *= 10;
		len--;
	}
	real_num = ft_atoi_rec(str, digit) * sign;
	return (real_num);
}
