/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:21:52 by marvin            #+#    #+#             */
/*   Updated: 2021/09/12 21:21:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int find_digit(int nb)
{
    int digit;
    int cnt;

    digit = 1;
    cnt = 0;
    while (1)
    {
        if (nb / digit > 0)
            cnt++;
        else
            break;
        digit *= 10;
    }
    digit /= 10;
}

void ft_putnbr(int nb)
{
    int digit;
    int n;

    digit = find_digit(nb);
    while(digit)
    {
        n = nb % (digit * 10) / digit;
        ft_putchar('0' + n);
        digit /= 10;
    }
}