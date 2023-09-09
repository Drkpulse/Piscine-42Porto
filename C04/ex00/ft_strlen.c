int ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
    i++;

    return(i);
}


#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{
   char str[] = "Moulinette had a bug ya ya yo";
   printf("%d \n", ft_strlen(str));
}