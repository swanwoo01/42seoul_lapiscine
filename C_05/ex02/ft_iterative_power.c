/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:07:38 by wyu               #+#    #+#             */
/*   Updated: 2021/09/22 13:07:38 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	iterator;
	int	result;

	if (power < 0)
		return (0);
	iterator = 0;
	result = 1;
	while (iterator < power)
	{
		result *= nb;
		iterator++;
	}
	return (result);
}
