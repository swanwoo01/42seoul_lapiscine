/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:55:05 by wyu               #+#    #+#             */
/*   Updated: 2021/09/25 21:42:56 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	idx;
	int	*arr;

	if (min >= max)
		return ((int *) NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return ((int *) NULL);
	idx = 0;
	while ((idx + min) < max)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (arr);
}
