int ft_str_is_numeric(char *str)
{
    int i;
    int c;
    i = 0;
    c = 1;
    
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            c = 1;  
        }
        else
        {
            c = 0;
            break;
        }
        
        i++;
    }
    return(c);   
}

#include <stdio.h>
#include <unistd.h>
int main()
{
    char frs[] = "3242a3432";
    printf("%d \n",  ft_str_is_numeric(frs));
}
