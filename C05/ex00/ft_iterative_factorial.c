#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;
    int i;
    i = 1;
    res = nb;
    while(i<nb)
    {
        res = res * i;
        i++;
    }
    return(res);
}

int main()
{
    int i;
    i = ft_iterative_factorial(5);
    printf("%d \n", i);
}