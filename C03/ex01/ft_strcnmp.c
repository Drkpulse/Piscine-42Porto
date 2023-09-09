int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  int i;
  i=0;
  while(i < n)
  {
      if(s1[i] != s2[i])
      {
        return(s1[i] - s2[i]);
      }
    i++;
  }
  return(0);
}

/*
#include <unistd.h>
#include <stdio.h>
int main ()
{
  char str[][15] = { "Moulinette" , "Moul1n3tte" , "Trashcan" };
  int n;
  printf ("Looking for Moulinette's replacement \n");
  for (n=0 ; n<3 ; n++)
    if (ft_strncmp (str[n],"Moulinette",5) == 0)
    {
      printf ("found %s\n",str[n]);
    }
  return 0;
}
*/