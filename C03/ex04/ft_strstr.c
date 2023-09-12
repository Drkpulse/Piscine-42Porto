/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:31:02 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 00:32:09 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == to_find[n])
		{
			while (to_find)
			{
				if (str[f] != to_find[n])
					break ;
				f++;
				n++;
			}
		}
		i++;
		f = i;
		n = 0;
	}
	return (to_find);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	const char	haystack[];
	const char	needle[];
	char		*res;

	haystack[] = "Piscine 42Porto";
	needle[] = "Porto";
	res = ft_strstr(haystack, needle);
	printf("Needle Found: %s\n", res);
	return (0);
}
*/
