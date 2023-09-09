unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
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
        n++;
    }

    size = i + n ;

    return(size);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main()
{   
   char str1[100] = "Let me pass ", str2[] = "Moulinette";

   ft_strlcat(str1, str2, 2);

   printf("%s \n", str1);
   printf("%s \n", str2);
   printf("%d \n", ft_strlcat(str1, str2, 2));
}