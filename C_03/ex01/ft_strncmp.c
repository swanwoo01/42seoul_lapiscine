/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 20:32:01 by wyu               #+#    #+#             */
/*   Updated: 2021/09/20 14:44:44 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	if (n <= 0)
		return (0);
	idx = 0;
	while (s1[idx] && s2[idx] && idx + 1 < n)
	{
		if (s1[idx] != s2[idx])
			break ;
		idx++;
	}
	return (s1[idx] - s2[idx]);
}
