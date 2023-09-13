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

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power --;
	}
	return (res);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_iterative_power(5,1);
    printf("%d \n", i);
}
*/