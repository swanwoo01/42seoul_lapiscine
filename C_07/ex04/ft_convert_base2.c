/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 09:52:42 by wyu               #+#    #+#             */
/*   Updated: 2021/09/27 15:33:48 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_pp(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || **str == '\t' || **str == '\n' || \
			**str == '\v' || **str == '\f' || **str == '\r')
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
	int	idx1;
	int	idx2;

	idx1 = 0;
	while (base[idx1])
	{
		if (base[idx1] == '-' || base[idx1] == '+' || base[idx1] == ' ' || \
			base[idx1] == '\t' || base[idx1] == '\n' || base[idx1] == '\v' || \
			base[idx1] == '\f' || base[idx1] == '\r')
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

int	base_find_idx(char *base, char ch)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (base[idx] == ch)
			break ;
		idx++;
	}
	if (!base[idx])
		return (-1);
	return (idx);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		base_num;
	int		idx;
	int		cur;
	int		res;

	sign = ft_str_pp(&str);
	base_num = ft_base_num(base);
	if (!base_num)
		return (0);
	idx = 0;
	res = 0;
	while (str[idx])
	{
		cur = base_find_idx(base, str[idx]);
		if (cur == -1)
			break ;
		res = res * base_num + cur;
		idx++;
	}
	return (res * sign);
}
