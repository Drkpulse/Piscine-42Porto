/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:28:24 by joseferr          #+#    #+#             */
/*   Updated: 2023/08/30 14:31:13 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void        ft_putnbr(int x)
{
    if (x < 0)
    {
        ft_putchar('-');
        ft_putnbr(-x);
    }
    else if (x > 9)
    {
        ft_putnbr(x / 10);
        ft_putnbr(x % 10);
    }
    else
    {
        ft_putchar(x + '0');
    }
}

/*
int main()
{
    int x;

    x = 99;

	ft_putnbr(x);
}
*/
