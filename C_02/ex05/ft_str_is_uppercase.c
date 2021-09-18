/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:12:32 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 21:10:49 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(char ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_isupper(*str))
			return (0);
		str++;
	}
	return (1);
}
