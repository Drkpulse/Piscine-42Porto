/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:32:17 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 01:27:45 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
		n++;
	}
	size = i + n;
	return (size);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	str1[100] = "Let me pass ", str2[];

	str1[100] = "Let me pass ", str2[] = "Moulinette";
	ft_strlcat(str1, str2, 2);
	printf("%s \n", str1);
	printf("%s \n", str2);
	printf("%d \n", ft_strlcat(str1, str2, 2));
}
*/
