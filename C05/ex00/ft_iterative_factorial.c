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

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	while (i < nb)
	{
		res = res * i;
		i++;
	}
	return (res);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		return (0);
	}
	return (nb);
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
