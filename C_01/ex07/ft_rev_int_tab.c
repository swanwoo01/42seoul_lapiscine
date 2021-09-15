/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:34:01 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 12:51:48 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		cnt;
	char	temp;

	cnt = 0;
	while (cnt < (size / 2))
	{
		temp = tab[cnt];
		tab[cnt] = tab[size - 1 - cnt];
		tab[size - 1 - cnt] = temp;
		cnt++;
	}
}
