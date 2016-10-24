/*
** my_strlen.c for  in /home/rouaneq/piscine/jour07/rouane_q/my_strlen
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Wed Oct 22 09:37:02 2014 ROUANET Quentin
** Last update Wed Oct 22 09:44:32 2014 ROUANET Quentin
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
