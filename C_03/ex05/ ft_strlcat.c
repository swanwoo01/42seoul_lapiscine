/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:51:22 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 21:08:43 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = 0;
	while (*dest)
	{
		dest++;
		dst_len++;
	}
	src_len = 0;
	while (*src != '\0' && dst_len + src_len < size - 1)
	{
		*dest++ = *src++;
		src_len++;
	}
	while (*src++)
		src_len++;
	*dest = '\0';
	if (len <= dst_len)
		return (src_len + len);
	else
		return (src_len + dst_len);
}
