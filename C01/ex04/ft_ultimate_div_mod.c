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
/*
int main()
{
	int *a;
	int *b;
	int num1;
	int num2;

	num1 = 3;
	num2 = 20;
	a = &num2;
	b = &num1;

	printf("%d, %d; \n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("%d, %d; \n", *a, *b);
	return (0);
}
*/