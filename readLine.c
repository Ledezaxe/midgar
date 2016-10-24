/*
** readLine.c for  in /home/rouaneq/piscine/midgar/rouane_q/quete1
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Fri Oct 31 12:10:31 2014 ROUANET Quentin
** Last update Fri Oct 31 12:11:51 2014 ROUANET Quentin
*/

#include "perso.h"

char	*readLine()
{
  ssize_t	ret;
  char	*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
