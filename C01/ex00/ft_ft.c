/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:47:24 by joseferr          #+#    #+#             */
/*   Updated: 2023/08/30 19:05:45 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Testing Purpose
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main(int argc, const char *argv[])
{
	int n;
	int *nbr;

	n = 1;
	nbr = &n;

	ft_putnbr(n);
	ft_putchar('\n');

	ft_ft(nbr);
	
	ft_putnbr(n);

	return 0;
}
*/
