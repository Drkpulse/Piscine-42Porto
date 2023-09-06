int ft_str_is_lowercase(char *str)
{
    int i;
    int c;
    i = 0;
    c = 1;
    
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
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
    char frs[] = "";
    printf("%d \n",  ft_str_is_lowercase(frs));
}