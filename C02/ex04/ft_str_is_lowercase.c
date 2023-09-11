/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:57:49 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 22:59:46 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = 1;
		}
		else
		{
			c = 0;
			break ;
		}
		i++;
	}
	return (c);
}
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
    char frs[] = "A MoUliNetTe deViA SofRer Um BuG";
    printf("%d \n",  ft_str_is_lowercase(frs));
}
*/
