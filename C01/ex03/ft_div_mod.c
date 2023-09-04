/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:15:56 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/04 12:58:07 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b;
	*mod = a % b;

}

int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 2;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a,b,div,mod);
}
