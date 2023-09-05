void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;
    i = 0;
    temp = 0;

    while (i < (size/2))
    {
        temp = tab[i];
        tab[i] = tab[size-1-i];
        tab[size-1-i] = temp;
        i++;
    }
}
/*
#include <stdio.h>
#include <unistd.h>


int main()
{
    int bat[] = {1,2,3,4,5,2};
    int size = 6;
    ft_rev_int_tab(bat, size);
    }
*/