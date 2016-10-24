/*
** my_strupcase.c for  in /home/rouaneq/piscine/jour06/rouane_q/my_strupcase
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Tue Oct 21 11:39:24 2014 ROUANET Quentin
** Last update Tue Oct 21 11:54:48 2014 ROUANET Quentin
*/

char	*my_strupcase(char* str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
