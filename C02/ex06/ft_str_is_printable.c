/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:05:48 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 23:07:41 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '!' && str[i] <= '~')
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

    printf("%d \n",  ft_str_is_printable(frs));
}
*/
