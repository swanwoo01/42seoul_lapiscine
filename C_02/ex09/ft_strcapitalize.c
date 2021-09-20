/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:14:55 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 13:24:36 by wyu              ###   ########.fr       */
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
	char	*str_start;

	str_start = str;
	while (*str)
	{
		if (ft_isupper(*str))
			*str = (*str) ^ 0x20;
		str++;
	}
	return (str_start);
}

int	ft_strcapitalize_flag(char ch)
{
	if (!('a' <= ch && ch <= 'z') && \
		!('A' <= ch && ch <= 'Z') && \
		!('0' <= ch && ch <= '9') && \
		32 <= ch && ch != 127)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*str_start;
	int		flag;
	int		str_idx;

	str = ft_strlowcase(str);
	str_start = str;
	flag = 1;
	str_idx = 0;
	while (str[str_idx])
	{
		if ('a' <= str[str_idx] && str[str_idx] <= 'z' && \
			flag)
		{
			str[str_idx] = str[str_idx] ^ 0x20;
			flag = 0;
		}
		else if ('0' <= str[str_idx] && str[str_idx] <= '9')
			flag = 0;
		else if (ft_strcapitalize_flag(str[str_idx]))
			flag = 1;
		str_idx++;
	}
	return (str_start);
}
