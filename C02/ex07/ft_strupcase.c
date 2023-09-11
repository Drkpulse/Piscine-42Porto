/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:12:09 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 23:14:16 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
    char frs[] = "A MoUliNetTe deViA SofRer Um BuG";

    printf("%s \n", ft_strupcase(frs));
}
*/
