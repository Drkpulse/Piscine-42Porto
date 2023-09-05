void ft_sort_int_tab(int *tab, int size)
{
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
            if (tab[x] > tab[x+1]) 
            {
                temp = tab[x];
                tab[x] = tab[x+1];
                tab[x+1] = temp;
            }
            x++;
        }
        i++;
    }
}

#include <stdio.h>
#include <unistd.h>


int main()
{
    int bat[] = {10,2,1,6,5,20};
    int size = 6;
    int i;

    ft_sort_int_tab(bat, size);
    for (i=0; i < size; i++) 
    printf("%d ", bat[i]); 
}