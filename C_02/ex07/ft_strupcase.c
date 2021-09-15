/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:17:28 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 18:04:26 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_islower(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while(*str)
	{
		if (ft_islower(*str))
			*str = *str & (char)(~0x20);
		str++;
	}
	return start;
}
