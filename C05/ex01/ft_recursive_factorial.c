#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{   
    int res;
    res = 0;
    if(nb > 1 )
    res = nb * ft_recursive_factorial(nb-1);
    return(res);
}

int main()
{
    int i;
    i = ft_recursive_factorial(5);
    printf("%d \n", i);
}