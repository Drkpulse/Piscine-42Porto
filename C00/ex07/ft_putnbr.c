/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:28:24 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 20:28:39 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdlib.h>
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
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
int main(int argc, char *argv[])
{
    argc = 0;
    int x;
    x = atoi(argv[1]);

	ft_putnbr(x);
}
*/
