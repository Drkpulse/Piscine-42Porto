#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;
    while(nb>0)
    {
        res = res + (nb * (nb-1));
        nb--;
    }
    return(res);
}

int main()
{   
    int i;
    i = ft_iterative_factorial(10);
    printf("%d", i);
}