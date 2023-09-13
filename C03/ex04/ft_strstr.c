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
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return ("NULL");
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	haystack[] = "Piscine 42Porto";
	char	needle[] = "Porto";
	char		*res;

	res = ft_strstr(haystack, needle);
	printf("Encontrei isto: %s\n", res);
	return (0);
}
*/