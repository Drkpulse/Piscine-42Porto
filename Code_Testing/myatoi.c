#include <unistd.h>
#include <stdio.h> //Can't be used

int myAtoi(char* str)
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

    char str[] = "89789";
 
    int val = myAtoi(str);

    printf("%d ", val); //Only for testing
     
    return 0;
}