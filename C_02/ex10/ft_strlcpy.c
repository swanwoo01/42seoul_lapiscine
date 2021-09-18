/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:47:20 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 18:22:08 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	while (i < src_len && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (size > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (src_len);
}
