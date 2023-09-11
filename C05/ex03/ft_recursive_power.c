#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
    else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	else
		return (result);
}

int main()
{
    int i;
    i = ft_recursive_power(5,2);
    printf("%d \n", i);
}