char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while(i <= n-1)
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
    int max;
    max = 10;
    ft_strncpy(dst, frst, max);
    printf("%s \n", frst);
    printf("%s \n", dst);
}