/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:29:40 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 02:09:51 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_char(int a)
{
	int	dec;
	int	uni;

	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + '0');
	}
	else
	{
		dec = a / 10;
		uni = a % 10;
		ft_putchar(dec + '0');
		ft_putchar(uni + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	x;

	i = 0;
	while (i <= 99)
	{
		x = i + 1;
		while (x <= 99)
		{
			int_char(i);
			ft_putchar(' ');
			int_char(x);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			x++;
		}
		i++;
	}
}
/*
int main(){ ft_print_comb2();} 
*/