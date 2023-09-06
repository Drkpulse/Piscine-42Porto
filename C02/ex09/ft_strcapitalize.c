#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int c;
    i = 0;
    
    while(*(str + i) != '\0')
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            if (i != 0)
            {
                *(str + i) = *(str + i) + 32;
            }
            
        }
        i++;
    }
    c = 0;
    
    while(*(str + c) != '\0')
    {
        if(*(str + c) >= '!' && *(str + c) <= '/' || *(str + c) >= '[' && *(str + c) <= '`' || *(str + c) == ' ')
        {
            if(*(str + c + 1) >= 'a' && *(str + c + 1) <= 'z')
            {
                *(str + c + 1) = *(str + c + 1) - 32;
                printf("%c \n", *(str + c + 1));
            }
        }
        c++;
    }
    return(str);
}



int main()
{
    char frs[] = "a MoUliNetTe !deViA SofRer U[m BuG";

    printf("%s \n", ft_strcapitalize(frs));
}