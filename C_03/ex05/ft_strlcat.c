/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:51:22 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 19:54:48 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = 0;
	while (dest[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len] && dst_len + src_len + 1 < size)
	{
		dest[dst_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dst_len + src_len] = '\0';
	while (src[src_len])
		src_len++;
	if (size > dst_len)
		return (dst_len + src_len);
	else
		return (src_len + size);
}
