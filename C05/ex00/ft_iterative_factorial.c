/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:25:10 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:25:14 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;
	int	nb1;

	nb1 = nb;
	ft = nb -1;
	while (ft > 0)
	{
		nb1 = nb1 * ft;
		ft--;
	}
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	return (nb1);
}
/*
#include <stdio.h>

int	main(void)
{
    int i;

    i = ft_iterative_factorial(5);
    printf("%d \n", i);
}
*/