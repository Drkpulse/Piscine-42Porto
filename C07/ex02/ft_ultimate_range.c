#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;	
		i++;
	}
	return (array);
}