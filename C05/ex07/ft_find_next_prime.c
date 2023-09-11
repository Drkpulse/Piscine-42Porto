#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
	int		i;
    i = 2;      

  if (nb == 0 || nb == 1)
    return(2);

  while (i <= nb / 2)
   {
    if (nb % i == 0) {
      nb++;
    }
    i++;
    }
    return(nb);
}

int main()
{
    int i;
    i = ft_is_prime(20);
    printf("%d \n", i);
}