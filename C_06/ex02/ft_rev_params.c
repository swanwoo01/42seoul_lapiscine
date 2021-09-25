/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:01:47 by wyu               #+#    #+#             */
/*   Updated: 2021/09/22 20:58:10 by wyu              ###   ########.fr       */
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

	while (argc > 1)
	{
		argv_len = ft_strlen(argv[--argc]);
		write(1, argv[argc], argv_len);
		write(1, "\n", 1);
	}
	return (0);
}
