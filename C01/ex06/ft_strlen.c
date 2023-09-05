int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

#include <stdio.h>
#include <unistd.h>

int main()
{
    char str[] = "Moulinette";
    printf("%s \n", str);
    ft_strlen(str);
    printf("%d \n", ft_strlen(str));
}