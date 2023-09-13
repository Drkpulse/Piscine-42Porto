/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:27:24 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:27:28 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int npn)
{
	int	n;

	n = 2;
	while (n < (npn / (n - 1)))
	{
		if ((npn % n) == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	npn;

	if (nb <= 2)
		return (2);
	npn = nb;
	while (prime(npn) == 0)
		npn++;
	return (npn);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_find_next_prime(20);
    printf("Proximo primo: %d \n", i);
}
*/