#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int main()
{
    int i;
    i = ft_sqrt(16);
    printf("%d \n", i);
}