/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:13:53 by tialbert          #+#    #+#             */
/*   Updated: 2023/08/26 10:04:15 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.h"

void	rush(int l, int h);

void	rush(int l, int h)
{
	int	i;
	int	j;
	char	corner;
	char	top;
	char	side;

	j = 1;
	corner = 'o';
	top = '-';
	side = '|';
	while (j <= h)
	{
		i = 1;
		if (j == 1 || j == h)
		{
			while (i <= l)
			{
				if (i == 1 || i == l)
					ft_putchar(corner);
				else
					ft_putchar(top);
				i++;
			}
		}
		else
		{
			while (i <= l)
			{
				if (i == 1 || i == l)
					ft_putchar(side);
				else
					ft_putchar(' ');
				i++;
			}
		}
		ft_putchar('\n');
		j++;
	}
	return ;
}

int	main()
{
	rush(5, 5);
	return (0);
}
