/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:44:28 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 18:17:59 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    char frst[] = "Vais ter de me passar";
    char dst[] = "A Moulinette que sofra um Bug";
    int max;
    max = 10;
    ft_strncpy(dst, frst, max);
    printf("%s \n", frst);
    printf("%s \n", dst);
}
*/
