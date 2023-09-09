char *ft_strstr(char *str, char *to_find)
{
    int i;
    int f;
    int n;
    i = 0;
    n = 0;
    while(str[i])
    {
        if (str[i] == to_find[n])
        {
            while(to_find)
            {
                if (str[f] != to_find[n])
                break;
                f++;
                n++;
            }
        }
        i++;
        f = i;
        n = 0;

    }
    return(to_find);
}

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main () {
   const char haystack[] = "Piscine 42Porto";
   const char needle[] = "Porto";
   char *res;

   res = ft_strstr(haystack, needle);

   printf("Needle Found: %s\n", res);
   
   return(0);
}