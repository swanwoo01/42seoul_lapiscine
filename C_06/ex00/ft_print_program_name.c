/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:50:33 by wyu               #+#    #+#             */
/*   Updated: 2021/09/22 20:57:14 by wyu              ###   ########.fr       */
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
	int	argv_len;

	if (argc == 1)
	{
		argv_len = ft_strlen(argv[0]);
		write(1, argv[0], argv_len);
		write(1, "\n", 1);
	}
	return (0);
}
