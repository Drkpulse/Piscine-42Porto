/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:25:31 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:25:36 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	res;

	n = 0;
	res = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (n < power - 1)
	{
		res = res * nb;
		n++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_iterative_power(5,1);
    printf("%d \n", i);
}
*/
