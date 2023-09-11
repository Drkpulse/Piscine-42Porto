/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 00:34:41 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 00:36:10 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
#include <unistd.h>

int	main(void)
{
	char	str[];

   str[] = "Moulinette had a bug ya ya yo";
   ft_putstr(str);
}
*/
