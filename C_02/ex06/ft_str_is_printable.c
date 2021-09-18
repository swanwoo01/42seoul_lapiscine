/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:14:54 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 19:11:43 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprintable(char ch)
{
	if (32 <= ch && ch != 127)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_isprintable(*str))
			return (0);
		str++;
	}
	return (1);
}
