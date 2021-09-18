/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:08:45 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 21:13:27 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (ft_isupper(*str))
			*str = (*str) ^ 0x20;
		str++;
	}
	return (start);
}
