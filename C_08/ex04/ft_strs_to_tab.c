/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:36:10 by wyu               #+#    #+#             */
/*   Updated: 2021/09/25 18:02:40 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
}

int	ft_struct_init(t_stock_str *p_stock, char *str)
{
	p_stock->size = ft_strlen(str);
	p_stock->str = str;
	p_stock->copy = (char *)malloc(sizeof(char) * (p_stock->size + 1));
	if (!(p_stock->copy))
		return (0);
	ft_strcpy(p_stock->copy, str);
	return (1);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p_stock;
	int			idx;

	p_stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!p_stock)
		return (0);
	idx = 0;
	while (idx < ac)
	{
		if (!ft_struct_init(p_stock + idx, av[idx]))
			break ;
		idx++;
	}
	p_stock[idx] = (t_stock_str){0, (char *)0, (char *)0};
	return (p_stock);
}
