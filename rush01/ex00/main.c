/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:14:56 by wyu               #+#    #+#             */
/*   Updated: 2021/09/18 17:17:33 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4

int error_print_and_return1()
{
	write(2, "Error\n", 6);
	return (1);
}

int inputable(char ch)
{
	if ('1' <= ch && ch <= '0' + N)
		return (0);
	else if (ch == ' ')
		return (0);
	return (1);
}

int error(int argc, char** argv)
{
	int flag;
	int i;

	flag = 0;
	if (argc != 2)
	{
		flag = error_print_and_return1();
		return flag;
	}
	i = 0;
	while (argv[1][i])
	{
		if(inputable(argv[1][i]))
		{
			flag = error_print_and_return1();
			return flag;
		}
	}
	return flag;
}

void udlr_input(int **udlr, char *argv_1)
{
	int i;
	int j;

	i = 0;
	cnt = 0;
	while(i < N)
	{
		while(j < N)
		{
			udlr[i][j] = int(argv_1[cnt] - '0');
			cnt++;
			j++;
		}
		i++;
	}
}

int **udlr_malloc(char *argv_1)
{
	int *udlr;
	int i;
	int j;

	udlr = (int**)malloc(sizeof(int*) * N);
	if (udlr == NULL)
		return NULL;
	i = 0;
	j = 0;
	while(i < N)
	{
		udlr[i] = (int*)malloc(sizeof(int) * N);
		if(udlr[i] == NULL)
		{
			while(j < i)
			{
				free(udlr[j]);
				j++;
			}
			return NULL;
		}
	}
	udlr_input(udlr, argv_1);
}

int main(int argc, char** argv)
{
	int **udlr;
	int flag;

	flag = 0;
	if (error(argc, argv))
		return (0);
	udlr = argv_malloc(argv[1])

}
