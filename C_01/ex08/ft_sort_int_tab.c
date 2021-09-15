/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:42:17 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 12:39:21 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx1;
	int	idx2;
	int	temp;

	idx1 = 0;
	while (idx1 < size - 1)
	{
		idx2 = idx1 + 1;
		while (idx2 < size)
		{
			if (tab[idx1] > tab[idx2])
			{
				temp = tab[idx1];
				tab[idx1] = tab[idx2];
				tab[idx2] = temp;
			}
			idx2++;
		}
		idx1++;
	}
}
