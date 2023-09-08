#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int    ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}

void ft_strcpy(char *dest, char *src)
{
    int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
 
char *ft_strdup(char *str)
{
    int i;
    int len;
    char *dest;

    len = ft_strlen(str);
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
		return (NULL);
    ft_strcpy(dest, str);

    return(dest);

}


int main()
{
    char source[] = "A Moulinette devia sofrer um bug ";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
    char* test = ft_strdup(source);
 
    printf("%s\n", target);
    printf("%s\n", test);
    return 0;
}
