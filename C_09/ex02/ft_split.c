/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:22:25 by wyu               #+#    #+#             */
/*   Updated: 2021/09/27 16:04:55 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isch_instr(char ch, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx])
	{
		if (ch == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	cnt;
	int	idx;

	cnt = 0;
	idx = 0;
	while (str[idx])
	{
		while (isch_instr(str[idx], charset))
			idx++;
		if (str[idx] && !isch_instr(str[idx], charset))
		{
			cnt++;
			while (str[idx] && !isch_instr(str[idx], charset))
				idx++;
		}
	}
	return (cnt);
}

char	*ft_strdup(char *str, char *charset)
{
	int		len;
	int		idx;
	char	*dsc;

	len = 0;
	while (str[len] && !isch_instr(str[len], charset))
		len++;
	dsc = (char *)malloc(sizeof(char) * (len + 1));
	if (!dsc)
		return ((char *)0);
	idx = 0;
	while (idx < len)
	{
		dsc[idx] = str[idx];
		idx++;
	}
	dsc[idx] = '\0';
	return (dsc);
}

char	**ft_split(char *str, char *charset)
{
	int		idx;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!res)
		return ((char **)0);
	idx = 0;
	while (*str)
	{
		while (isch_instr(*str, charset))
			str++;
		if (*str && !isch_instr(*str, charset))
		{
			res[idx] = ft_strdup(str, charset);
			if (!res[idx])
				break ;
			idx++;
			while (*str && !isch_instr(*str, charset))
				str++;
		}
	}
	res[idx] = (char *)0;
	return (res);
}
