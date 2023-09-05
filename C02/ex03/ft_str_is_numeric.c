int ft_str_is_numeric(char *str)
{
    int i;
    int c;
    i = 0;
    c = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            c = 1;
        }
        i++;
    }
    return(c);   
}

#include <stdio.h>
#include <unistd.h>
int main()
{
    char frs[] = "32423432";
    printf("%d \n",  ft_str_is_numeric(frs));
}

/*Rever 2 e 3 trocar valores para Null ser 1*/