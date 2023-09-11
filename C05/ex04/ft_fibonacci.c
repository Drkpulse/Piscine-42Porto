#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}


int main()
{
    int i;
    i = ft_fibonacci(3);
    printf("%d \n", i);
}