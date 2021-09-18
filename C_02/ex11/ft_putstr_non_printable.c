/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:15:24 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 19:54:10 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isnonprintable(char ch)
{
	if (ch < 32 || ch == 127)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	cur;
	int				index;

	index = 0;
	while (1)
	{
		cur = (unsigned char)str[index];
		if (cur == '\0')
			break ;
		if (ft_isnonprintable(cur))
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[cur / 0x10], 1);
			write(1, &"0123456789abcdef"[cur % 0x10], 1);
		}
		else
			write(1, &cur, 1);
		index++;
	}
}
