/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 08:31:22 by tialbert          #+#    #+#             */
/*   Updated: 2023/08/26 08:59:46 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putchar.h"

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

/*int	main(void)
{
	ft_putchar('g');
}*/
