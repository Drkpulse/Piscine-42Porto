/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 03:26:29 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 03:26:31 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	exp;

	exp = 1;
	if (nb > 0)
	{
		while (exp * exp <= nb)
		{
			if (exp * exp == nb)
				return (exp);
			if (exp > 46340)
				return (0);
			exp++;
		}
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
    int i;

    i = ft_sqrt(16);
    printf("%d \n", i);
}
*/