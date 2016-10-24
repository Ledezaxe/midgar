/*
** my_strdup.c for  in /home/rouaneq/piscine/jour10/rouane_q/my_strdup
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Mon Oct 27 10:46:22 2014 ROUANET Quentin
** Last update Wed Oct 29 09:15:26 2014 ROUANET Quentin
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  int	i;
  char	*ret;

  ret = malloc((my_strlen(str) + 1) * sizeof(char));
  if (ret == NULL)
    return(NULL);
  i = 0;
  while (str[i] != '\0')
    {
      ret[i] = str[i];
      i = i + 1;
    }
  ret[i] = '\0';
  return (ret);
}
