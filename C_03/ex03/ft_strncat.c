/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:38:11 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 14:44:46 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	idx;

	start = dest;
	while (*dest)
		dest++;
	idx = 0;
	while (src[idx] && idx < nb)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (start);
}
