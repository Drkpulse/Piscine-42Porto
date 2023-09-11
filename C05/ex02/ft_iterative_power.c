#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{   
    int n;
    int res;
    n = 0;
    res = nb;
    if (nb == 0 && power == 0)
        return(1);
    else if (power < 0)
        return(0);
    while(n < power -1 )
    {
        res = res * nb;
        n++;
    }
    return(res);
}

int main()
{
    int i;
    i = ft_iterative_power(5,1);
    printf("%d \n", i);
}