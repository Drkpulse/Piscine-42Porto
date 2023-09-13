/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:56:14 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/13 15:32:32 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <unistd.h>

int main ()
{
	char	str1[] = "Moulinette", str2[] = "Moulinutte";
	printf ("%d", ft_strcmp(str1,str2));
  return (0);
}
*/