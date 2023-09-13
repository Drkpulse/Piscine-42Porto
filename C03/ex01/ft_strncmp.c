/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:01:49 by joseferr          #+#    #+#             */
/*   Updated: 2023/09/12 01:27:00 by joseferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <unistd.h>

int main ()
{
	char	str[][15];
  int n;

  str[][15] = { "Moulinette" , "Moul1n3tte" , "Trashcan" };
  printf ("Looking for Moulinette's replacement \n");
  for (n=0 ; n<3 ; n++)
    if (ft_strncmp (str[n],"Moulinette",5) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return (0);
}
*/
