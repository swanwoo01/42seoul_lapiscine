/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:45:43 by wyu               #+#    #+#             */
/*   Updated: 2021/09/22 20:58:20 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcat(char *str1, char *str2)
{
	int	idx;

	idx = 0;
	while (str1[idx] && str[idx])
	{
		if (str1[idx] != str2[idx])
			break ;
		idx++;
	}
	return (str1[idx] - str2[idx]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_argv_print(int argc, char **argv)
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
}

int	main(int argc, char **argv)
{
	int		idx1;
	int		idx2;
	char	*tmp;

	idx1 = 1;
	while (idx1 < argc - 1)
	{
		idx2 = idx1 + 1;
		while (idx2 < argc)
		{
			if (ft_strcat(argv[idx1], argv[idx2]) > 0)
			{
				tmp = argv[idx1];
				argv[idx1] = argv[idx2];
				argv[idx2] = tmp;
			}
			idx2++;
		}
		idx1++;
	}
	ft_argv_print(argc, argv);
	return (0);
}
