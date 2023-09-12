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
#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (2);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			nb++;
		}
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_find_next_prime(20);
    printf("%d \n", i);
}
*/
