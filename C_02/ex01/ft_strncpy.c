/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:52:07 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 19:51:17 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	char			*start;

	index = 0;
	start = dest;
	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (i < n)
	{
		dest[index] = '\0';
		i++;
	}
	return (start);
}
