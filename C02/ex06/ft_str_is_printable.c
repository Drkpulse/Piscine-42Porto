int ft_str_is_printable(char *str)
{
    int i;
    int c;
    i = 0;
    c = 1;
    
    while(str[i] != '\0')
    {
        if(str[i] >= '!' && str[i] <= '~')
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
    char frs[] = "awdawdA";

    printf("%d \n",  ft_str_is_printable(frs));
}