/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:25:55 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:25:58 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else
		return (result);
}
/*
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_recursive_power(5,2);
    printf("%d \n", i);
}
*/
