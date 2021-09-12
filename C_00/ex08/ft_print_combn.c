/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:40:02 by marvin            #+#    #+#             */
/*   Updated: 2021/09/12 21:40:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void check_n (char *print_n, int n, int c_n)
{
    if(print_n[c_n] > '9')
    {
        print_n[c_n] = '0';
        print_n[c_n - 1]++;
        check_n(print_n, n, 0);
        return;
    }
    while (print_n[c_n] >= print_n[c_n + 1])
        print_n[c_n + 1]++;
    if(c_n != n - 1)
        check_n(print_n, n, c_n + 1);
}

void ft_print_combn(int n)
{
    char print_n[n];
    int cnt;

    cnt = 0;
    while(cnt < n)
    {
        print_n[cnt] = '0';
        cnt++;
    }
    while(print_n[0] != '9' - (n - 1) || print_n[n - 1] != '9')
    {
        print_n[n - 1]++;
        check_n(print_n, n, 0);
        cnt = 0;
        while(cnt < n)
        {
            ft_putchar(print_n[cnt]);
            cnt++;
        }
        if (print_n[0] != '9' - (n - 1) || print_n[n - 1] != '9')
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}