/*
** my_strcmp.c for  in /home/rouaneq/piscine/jour08/my_strcmp
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 23 08:37:58 2014 ROUANET Quentin
** Last update Thu Oct 23 11:49:59 2014 ROUANET Quentin
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] != s2[i])
	{
	  if (s1[i] < s2[i])
	    return (-1);
	  return (1);
	}
      i = i + 1;
    }
  if (s1[i] == s2[i])
    return (0);
  else if (s1[i] < s2[i])
    return (-1);
  else
    return (0);
}
