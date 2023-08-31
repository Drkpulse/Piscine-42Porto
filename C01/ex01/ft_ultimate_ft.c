#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr)
{
  int val = 42;
  int *one;
  int **two;
  int ***three;
  int ****four;
  int *****five;
  int ******six;
  int *******seven;
  int ********eight;
  
  one = &val;
  two = &one;
  three = &two;
  four = &three;
  five = &four;
  six = &five;
  seven = &six;
  eight = &seven;
  nbr = &eight;
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}



int main(int argc, const char *argv[])
{


	int nbr;

	nbr = 1;

	ft_putnbr(nbr);
	ft_putchar('\n');

	ft_ultimate_ft(nbr);


	return 0;
}
