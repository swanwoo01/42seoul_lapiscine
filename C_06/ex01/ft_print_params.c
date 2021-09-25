/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:56:17 by wyu               #+#    #+#             */
/*   Updated: 2021/09/25 10:14:56 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	idx;
	int	argv_len;

	idx = 1;
	while (idx < argc)
	{
		argv_len = ft_strlen(argv[idx]);
		write(1, argv[idx], argv_len);
		write(1, "\n", 1);
		idx++;
	}
	return (0);
}
