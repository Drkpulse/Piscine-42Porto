#include <unistd.h>

void	wrtchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		wrtchar('-');
		wrtchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		wrtchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		wrtchar(nb + '0');
	}
}

int main()
{
    ft_putnbr(42);
}