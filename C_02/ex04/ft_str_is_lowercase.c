/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:10:35 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 21:10:37 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_islower(*str))
			return (0);
		str++;
	}
	return (1);
}
