/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:40:50 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 14:44:47 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p_str;
	char	*p_to_find;

	if (!*to_find)
		return (str);
	while (*str)
	{
		p_str = str;
		p_to_find = to_find;
		while (*p_to_find && *p_str == *p_to_find)
		{
			p_str++;
			p_to_find++;
		}
		if (!*p_to_find)
			return (str);
		str++;
	}
	return (0);
}
