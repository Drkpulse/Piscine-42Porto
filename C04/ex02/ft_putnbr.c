/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:36:59 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 00:37:05 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	wrtchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		wrtchar('-');
		wrtchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		wrtchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		wrtchar(nb + '0');
	}
}
/*
#include <unistd.h>
int	main(void)
{
	ft_putnbr(42);
}
*/