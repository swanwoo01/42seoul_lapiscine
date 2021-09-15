/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:42:17 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 19:36:01 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	while (left < size - 1)
	{
		right = left + 1;
		while (right < size)
		{
			if (tab[left] > tab[right])
			{
				temp = tab[left];
				tab[left] = tab[right];
				tab[right] = temp;
			}
			right++;
		}
		left++;
	}
}
