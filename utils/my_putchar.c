/*
** my_putchar.c for  in /home/rouaneq/piscine/lib_my
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 23 14:37:48 2014 ROUANET Quentin
** Last update Thu Oct 23 14:47:57 2014 ROUANET Quentin
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
