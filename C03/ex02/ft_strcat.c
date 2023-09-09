char *ft_strcat(char *dest, char *src)
{
    int i;
    int n;
    i = 0;
    n = 0;
    while(dest[i])
    {
        i++;
    }
    while(src[n])
    {
        dest[i] = src[n];
        n++;
        i++;
    }

    return(dest);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{   
   char str1[100] = "Let me pass ", str2[] = "Moulinette";

   ft_strcat(str1, str2);

   printf("%s \n", str1);
   printf("%s \n", str2);
}