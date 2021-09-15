/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:14:55 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 19:22:09 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(char ch)
{
	if (ch == ' ')
		return (1);
	return (0);
}

int ft_islower(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	return (0);
}

int ft_isupper(char ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *start;
	int flag;

	start = str;
	flag = 0;
	while(*str)
	{
		if( flag && ft_islower(*str))
			*str = (*str) & (char)(~0x20);
		else ( ft_isupper(*str))
			*str = (*str)^(char)(0x20);
		if (ft_isspace(*str))
			flag = 1;
		else
			flag = 0;
	}
	return start;
}
