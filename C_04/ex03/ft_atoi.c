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

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	idx;

	ft_space_remove(&str);
	sign = ft_sign(&str);
	res = 0;
	idx = 0;
	while ('0' < str[idx] && str[idx] <= '9')
	{
		res = res * 10 + (str[idx] - '0');
		idx++;
	}
	return (res * sign);
}
