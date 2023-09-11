/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:15:56 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 20:43:15 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
	int a;
	int b;
	int *div;
	int *mod;
	int res;
	int resto;

	a = 4;
	b = 2;
	res = 0;
	resto = 0;
	div = &res;
	mod = &resto;

	printf("%d, %d, %d, %d; \n", a, b,res,resto);
	ft_div_mod(a, b, div, mod);
	printf("%d, %d, %d, %d; \n", a, b,res,resto);
	return (0);
}
*/
