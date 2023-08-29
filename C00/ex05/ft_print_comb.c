/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:41:25 by joseferr          #+#    #+#             */
/*   Updated: 2023/08/29 15:55:14 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char i,char n,char x)
{
	write(1, &i, 1);
	write(1, &n, 1);
	write(1, &x, 1);
	if (i < '7')
	{
		write(1, ", ", 1);
	}
}


void ft_print_comb(void)
{
	char i;
	char n;
	char x;

	i = '0';
	while(i<='7')
	{
		n = i + 1;
		while(n<='8')
		{
			x = n + 1;
			while(x<='9')
			{
				ft_putchar(i,n,x);
				x++;
			}
			n++;
		}
		i++;
	}
}

/* int main(){ ft_print_comb();} */
