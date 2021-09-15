/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:45:20 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 15:51:33 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int index;
	char *temp;

	index = 0;
	temp = dest;
	while(*src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return temp;
}
