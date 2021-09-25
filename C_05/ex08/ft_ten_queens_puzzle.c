/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:26:11 by wyu               #+#    #+#             */
/*   Updated: 2021/09/22 13:26:11 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_loc(int *loc, int *cnt)
{
	int	idx;

	idx = 0;
	while (idx < 10)
	{
		ft_putchar(loc[idx] + '0');
		idx++;
	}
	write(1, "\n", 1);
	(*cnt)++;
}

void	set(int *loc, int ( *flag)[19], int col, int *cnt)
{
	int	row;

	row = 0;
	while (row < 10)
	{
		if (!flag[0][row] && !flag[1][col + row] && !flag[2][col - row + 9])
		{
			loc[col] = row;
			if (col == 9)
				print_loc(loc, cnt);
			else
			{
				flag[0][row] = 1;
				flag[1][col + row] = 1;
				flag[2][col - row + 9] = 1;
				set(loc, flag, col + 1, cnt);
				flag[0][row] = 0;
				flag[1][col + row] = 0;
				flag[2][col - row + 9] = 0;
			}
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	flag[3][19];
	int	loc[10];
	int	idx1;
	int	idx2;
	int	cnt;

	idx1 = 0;
	while (idx1 < 3)
	{
		idx2 = 0;
		while (idx2 < 19)
		{
			flag[idx1][idx2] = 0;
			idx2++;
		}
		idx1++;
	}
	cnt = 0;
	set(loc, flag, 0, &cnt);
	return (cnt);
}
