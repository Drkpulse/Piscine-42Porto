char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int n;
    i = 0;
    n = 0;
    while(dest[i])
    {
        i++;
    }
    while(n < nb)
    {
        dest[i] = src[n];
        n++;
        i++;
    }
    dest[i+1] = "\0";

    return(dest);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{   
   char str1[100] = "Let me pass ", str2[] = "Moulinette";

   ft_strncat(str1, str2, 2);

   printf("%s \n", str1);
   printf("%s \n", str2);
}