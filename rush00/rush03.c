/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 22:48:36 by marvin            #+#    #+#             */
/*   Updated: 2021/09/10 22:48:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern void	ft_putchar(char ch);

void	row_print(char first, char middle, char last, int column)
{
	int	middle_count;

	middle_count = column - 2;
	if (column < 1)
		return ;
	ft_putchar(first);
	while (middle_count > 0)
	{
		ft_putchar(middle);
		middle_count--;
	}
	if (column > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y < 1)
		return ;
	row_print('A', 'B', 'C', x);
	while (y - 2 > 0)
	{
		row_print('B', ' ', 'B', x);
		y--;
	}
	if (y > 1)
		row_print('A', 'B', 'C', x);
}
