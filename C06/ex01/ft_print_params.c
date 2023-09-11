#include <unistd.h>

char ft_wrt_str(char *str){

    int i;
    i = 0;
    while(str[i])
    {
    write(1, &str[i],1);
    i++;
    }
    write(1, "\n",1);
    return(0);
}

int main(int argc, char **argv)
{
    int i;
    i = 1;
    while(i < argc)
    {
    ft_wrt_str(argv[i]);
    i++; 
    }
    
    return(0);
}