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
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rest_d;
	unsigned int	rest_s;

	i = ft_strlen(dest);
	j = 0;
	rest_d = ft_strlen(dest);
	rest_s = ft_strlen(src);
	if (size < 1)
		return (rest_s + size);
	while (src[j] && i < size - 1)
	{
		dest [i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < rest_d)
		return (rest_s + size);
	else
		return (rest_d + rest_s);
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char str1[100] = "Let me pass ", str2[] = "Moulinette";
	ft_strlcat(str1, str2, 2);
	printf("%s \n", str1);
	printf("%s \n", str2);
	printf("%d \n", ft_strlcat(str1, str2, 2));
}
*/