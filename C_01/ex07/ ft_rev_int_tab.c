/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:34:01 by wyu               #+#    #+#             */
/*   Updated: 2021/09/13 13:48:51 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		len;
	char	temp;

	len = 0;
	while (len < size / 2)
	{
		temp = tab[len];
		tab[len] = tab[--size];
		tab[size] = temp;
	}
}
