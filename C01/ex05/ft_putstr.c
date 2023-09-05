void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    write(1, str, i);
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
    char str[] = "batatas";

    ft_putstr(str);
}
*/