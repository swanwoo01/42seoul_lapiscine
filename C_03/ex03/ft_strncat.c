/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:38:11 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 21:08:28 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	start = dest;
	while (*dest)
		dest++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	if (i != nb)
		dest[i] = src[i];
	return (start);
}
