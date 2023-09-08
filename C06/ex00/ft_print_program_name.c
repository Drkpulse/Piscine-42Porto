#include <unistd.h>

char ft_print_program_name(char *str){

    int i;
    i = 0;
    while(str[i])
    {
    write(1, &str[i],1);
    i++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    (void) argc;
    ft_print_program_name(argv[0]);
    return(0);
}