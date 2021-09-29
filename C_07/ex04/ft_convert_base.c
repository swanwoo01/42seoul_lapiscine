/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:48:26 by wyu               #+#    #+#             */
/*   Updated: 2021/09/27 15:34:51 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_base_num(char *base);

char	*ft_strrev(char *str, int size)
{
	int		idx;
	char	temp;

	idx = 0;
	while (idx < size / 2)
	{
		temp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = temp;
		idx++;
	}
	return (str);
}

char	*ft_itoa_base(int num, char *base, char *res)
{
	int			idx;
	int			rdx;
	long long	lnum;

	idx = 0;
	lnum = (long long)num;
	if (lnum < 0)
		lnum *= -1;
	rdx = ft_base_num(base);
	while (lnum > rdx - 1)
	{
		res[idx++] = base[lnum % rdx];
		lnum /= rdx;
	}
	res[idx++] = base[lnum];
	if (num < 0)
		res[idx++] = '-';
	res[idx] = '\0';
	return (ft_strrev(res, idx));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*res;

	if (!(ft_base_num(base_from) && ft_base_num(base_to)))
		return ((char *) NULL);
	num = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * 34);
	res = ft_itoa_base(num, base_to, res);
	return (res);
}
