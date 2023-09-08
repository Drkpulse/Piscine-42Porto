#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int c;
    i = 0;
    
    while(*(str + i) != '\0')
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) = *(str + i) + 32;            
        }
        i++;
    }
    c = 0;
    while(*(str + c) != '\0')
    {
        if (c == 0 && *(str + c) >= 'a' && *(str + c) <= 'z')
            {
                *(str + c) = *(str + c) - 32;
                
            }
        else if((*(str + c) >= '!' && *(str + c) <= '/') || (*(str + c) >= '[' && *(str + c) <= '`') || *(str + c) == ' ')
        {
            if(*(str + c + 1) >= 'a' && *(str + c + 1) <= 'z')
            {
                *(str + c + 1) = *(str + c + 1) - 32;
                
            }
        }
        c++;
    }
    return(str);
}



int main(int argc, char **argv)
{
    (void) argc;
    
    printf("%s \n", ft_strcapitalize(&argv[1][0]));
}
/*"a moUliNetTe !deViA Sof]er +Um B(uG"*/