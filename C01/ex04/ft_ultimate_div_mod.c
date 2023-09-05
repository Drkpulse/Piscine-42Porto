#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int divisao;
	int resto;

	divisao = *a / *b;
	resto = *a % *b;
	*a = divisao;
	*b = resto;

}

int main()
{
	int *a;
	int *b;
	int num1;
	int num2;

	a = 4;
	b = 2;
	num1 = 0;
	num2 = 0;

	printf("%d, %d, %d, %d; \n", a, b);
	ft_div_mod(&a, &b);
	printf("%d, %d, %d, %d; \n", a, b);
	return (0);
}
