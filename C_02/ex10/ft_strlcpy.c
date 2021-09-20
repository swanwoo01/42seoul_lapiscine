/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:47:20 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 12:25:21 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	idx;

	if (!dest || !src)
		return (0);
	src_len = 0;
	while (src[src_len])
		src_len++;
	idx = 0;
	while (idx < src_len && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size > 0)
		dest[idx] = '\0';
	return (src_len);
}
