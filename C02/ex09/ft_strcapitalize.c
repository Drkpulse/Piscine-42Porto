/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:19:55 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/11 23:46:35 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	functionsthefunction(char *str, int c)
{
	if (c == 0 && *(str + c) >= 'a' && *(str + c) <= 'z')
	{
		*(str + c) = *(str + c) - 32;
	}
	else if ((*(str + c) >= '!' && *(str + c) <= '/') || (*(str + c) >= '['
				&& *(str + c) <= '`') || *(str + c) == ' ')
	{
		if (*(str + c + 1) >= 'a' && *(str + c + 1) <= 'z')
		{
			*(str + c + 1) = *(str + c + 1) - 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	c = 0;
	while (*(str + c) != '\0')
	{
		functionsthefunction(str, c);
		c++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
    (void) argc;
    
    printf("%s \n", ft_strcapitalize(&argv[1][0]));
}
*/