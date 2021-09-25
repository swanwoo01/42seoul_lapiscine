/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 20:15:49 by wyu               #+#    #+#             */
/*   Updated: 2021/09/25 21:49:50 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;

	if (min >= max)
		return ((int) NULL);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	idx = 0;
	while (idx + min < max)
	{
		(*range)[idx] = idx + min;
		idx++;
	}
	return (max - min);
}
