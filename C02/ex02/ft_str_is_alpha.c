/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:47:17 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 22:52:31 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
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
    printf("%d \n",  ft_str_is_alpha(frs));
}
*/
