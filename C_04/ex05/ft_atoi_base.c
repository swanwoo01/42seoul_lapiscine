/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:37:57 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 15:37:57 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>

int	ft_str_pp(char **str)
{
	int	sign;

	sign = 1;
	while (**str == '-' || **str == '+' || **str == ' ' || \
			**str == '\t' || **str == '\n' || **str == '\v' || \
			**str == '\f' || **str == '\r')
		(*str)++;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
	}
	return (sign);
}

int	ft_base_num(char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '-' || base[idx] == '+' || base[idx] == ' ' || \
			base[idx] == '\t' || base[idx] == '\n' || base[idx] == '\v' || \
			base[idx] == '\f' || base[idx] == '\r')
			return (0);
		else if (base[idx] == base[idx + 1])
			return (0);
		idx++;
	}
	if (idx == 1)
		return (0);
	else
		return (idx);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_atoi_base_rec(char *str, char *base, int base_num, int cur_num)
{
	int	real_num;
	int	idx;

	if (!*str)
		return (0);
	real_num = ft_atoi_base_rec(str + 1, base, base_num, base_num * cur_num);
	idx = 0;
	while (base[idx] != *str)
		idx++;
	real_num += idx * cur_num;
	return (real_num);
}

int	ft_atoi_base(char *str, char *base)
{
	int		real_num;
	int		base_num;
	int		idx;
	int		str_len;
	char	temp;

	real_num = ft_str_pp(&str);
	base_num = ft_base_num(base);
	if (!base_num)
		return (0);
	idx = 0;
	str_len = ft_strlen(str);
	while (idx < str_len / 2)
	{
		temp = str[idx];
		str[idx] = str[str_len - idx - 1];
		str[str_len - idx - 1] = temp;
		idx++;
	}
	real_num *= ft_atoi_base_rec(str, base, base_num, 1);
	return (real_num);
}
