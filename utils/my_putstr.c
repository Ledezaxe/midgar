/*
** my_putstr.c for  in /home/rouaneq/piscine/jour06/rouane_q/my_putstr
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Tue Oct 21 10:17:13 2014 ROUANET Quentin
** Last update Tue Oct 21 10:18:17 2014 ROUANET Quentin
*/

#include <unistd.h>

void	my_putstr(char *str)
{
  while (*str)
    write(1, str++, 1);
}
