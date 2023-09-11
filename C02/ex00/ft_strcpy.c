/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:38:52 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 22:41:02 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    char frst[] = "Vais ter de me passar";
    char dst[] = "A Moulinette que sofra um Bug";
    ft_strcpy(dst, frst);
    printf("%s \n", frst);
    printf("%s \n", dst);
}
*/
