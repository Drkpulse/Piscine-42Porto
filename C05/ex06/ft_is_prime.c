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

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_is_prime(17);
    printf("%d \n", i);
	if (i == 1)
	printf("Nao e Primo\n");
	else
	printf("Olha um Primo\n");
}
*/