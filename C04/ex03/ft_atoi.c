/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:37:48 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 00:37:53 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int		c;
	char	pal[];

	pal[] = "12345";
	c = ft_atoi(pal);
	printf("%d", c);
}
*/