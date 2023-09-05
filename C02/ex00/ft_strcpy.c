char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i]= '\0';
}


#include <stdio.h>
#include <unistd.h>
int main()
{
    char frst[] = "Vais ter de me passar";
    char dst[] = "A Moulinette que sofra um Bug";
    ft_strcpy(dst, frst);
    printf("%s \n", frst);
    printf("%s \n", dst);
}