/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:25:19 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:25:42 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb >= 1)
	{
		return (nb *= ft_recursive_factorial(nb -1));
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
    int i;

    i = ft_recursive_factorial(5);
    printf("%d \n", i);
}
*/