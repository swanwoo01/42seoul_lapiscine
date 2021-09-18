/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:14:55 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 19:51:43 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(char ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (1);
	return (0);
}

int	ft_isnumeric(char ch)
{
	if ('0' <= ch && ch <= '9')
		return (1);
	return (0);
}

int	ft_isnotword(char ch)
{
	if (32 <= ch && ch != 127 && \
		!ft_islower(ch) && \
		!ft_isupper(ch) && \
		!ft_isnumeric(ch))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		flag;

	start = str;
	flag = 1;
	while (*str)
	{
		if (flag)
		{
			if (ft_islower(*str))
				*str = *str ^ 0x20;
			if (!ft_isnotword(*str))
				flag = 0;
		}
		else
		{
			if (ft_isnotword(*str))
				flag = 1;
			else if (ft_isupper(*str))
				*str = *str ^ 0x20;
		}
		str++;
	}
	return (start);
}
