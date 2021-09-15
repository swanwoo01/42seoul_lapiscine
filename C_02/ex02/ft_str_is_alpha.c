/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:54:09 by wyu               #+#    #+#             */
/*   Updated: 2021/09/15 17:09:15 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char ch)
{
	if ('a' <= ch && ch <= 'z')
		return 1;
	else if ('A' <= ch && ch <= 'Z')
		return 1;
	return 0;
}

int	ft_str_is_alpha(char *str)
{
	while(*str)
	{
		if(!ft_isalpha(*str))
			return 0;
		str++;
	}
	return 1;
}
