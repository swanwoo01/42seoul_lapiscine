/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:05:16 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 17:10:19 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isnumeric(char ch)
{
	if('0' <= ch && ch <= '9')
		return 1;
	return 0;
}

int ft_str_is_numeric(char *str)
{
	while(*str)
	{
		if (!ft_isnumeric(*str))
			return 0;
		str++;
	}
	return 1;
}
