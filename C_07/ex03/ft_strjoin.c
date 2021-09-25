/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:20:55 by wyu               #+#    #+#             */
/*   Updated: 2021/09/25 21:46:01 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dst, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	return (dst + idx);
}

char	*ft_strjoin_malloc(int size, char **strs, char *sep)
{
	char	*res;
	int		cnt;
	int		idx;

	cnt = 0;
	idx = 0;
	while (idx < size)
	{
		cnt += ft_strlen(strs[idx]);
		idx++;
	}
	cnt += ft_strlen(sep) * (size - 1);
	res = (char *)malloc(sizeof(char) * (cnt + 1));
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*dst;
	int		idx;

	if (!size)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	res = ft_strjoin_malloc(size, strs, sep);
	if (!res)
		return ((char *)0);
	idx = 0;
	dst = res;
	while (idx < size)
	{
		dst = ft_strcat(dst, strs[idx]);
		if (idx < size - 1)
			dst = ft_strcat(dst, sep);
		idx++;
	}
	*dst = '\0';
	return (res);
}
