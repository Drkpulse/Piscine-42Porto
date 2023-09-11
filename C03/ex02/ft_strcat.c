/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:30:29 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 00:30:41 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[n])
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char str1[100] = "Let me pass ", str2[] = "Moulinette";

	ft_strcat(str1, str2);

	printf("%s \n", str1);
	printf("%s \n", str2);
}
*/
