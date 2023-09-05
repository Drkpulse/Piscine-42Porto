int ft_str_is_alpha(char *str)
{
    int i;
    int c;
    i = 0;
    c = 0;
    while(str[i] != '\0')
    {
        if(str[i] > 64 && str[i] < 91 || str[i] > 96 && str[i] < 123)
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
    char frs[] = "Vais ter de me passar";
    printf("%d \n",  ft_str_is_alpha(frs));
}