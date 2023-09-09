#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{

    int res = 0;
    int i = 0;
 
    while (str[i] != '\0')
    {
         res = res * 10 + str[i] - '0';
         i++;
    }
    
    return res;
}


int main()
{
    int c;
    char pal[] = "12345";
    c = ft_atoi(pal);
    printf ("%d", c);

}
 