/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:27:14 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:27:18 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			prime++;
		i++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_is_prime(2);
    printf("%d \n", i);
	if (i == 1)
	printf("Olha um Primo\n");
	else
	printf("Nao e Primo\n");
}
*/