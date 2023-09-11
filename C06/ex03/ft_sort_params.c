#include <unistd.h>
#include <stdio.h>

void ft_wrt_str(int size, char *str){

    int i;
    int x;
    int temp;

    i = 0;
    temp = 0;
    x = 0;

    while (i < size-1)
    {
        while ( x < size-1-i)
        {
            if (str[x] > str[x+1]) 
            {
                temp = str[x];
                str[x] = str[x+1];
                str[x+1] = temp;
            }
            x++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    i = 1;
    ft_wrt_str(argc,argv) ;
    while (i < argc)
    {
        printf("%s ", argv[i]);
        i++;
    }
    
    return(0);
}