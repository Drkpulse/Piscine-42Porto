/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:13:53 by tialbert          #+#    #+#             */
/*   Updated: 2023/08/26 17:30:12 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	write_line(int i, int x, char c, char d);

void	rush(int x, int y)
{
	char	corner;
	char	side;
	char	top;
	int	i;
	int	j;

	j = 1;
	corner = 'o';
	top = '-';
	side = '|';
	while (j <= y)
	{
		i = 1;
		if (j == 1 || j == y)
			write_line(i, x, corner, top);
		else
			write_line(i, x, side, ' ');
		ft_putchar('\n');
		j++;
	}
	return ;
}

void	write_line(int i, int x, char c, char d)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar(c);
		else
			ft_putchar(d);
		i++;
	}
}
