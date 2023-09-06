char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    
    while(*(str + i) != '\0')
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) = *(str + i) + 32;
        }
        i++;
    }
    return(str);
}

#include <stdio.h>
#include <unistd.h>

int main()
{
    char frs[] = "A MoUliNetTe deViA SofRer Um BuG";

    printf("%s \n", ft_strlowcase(frs));
}