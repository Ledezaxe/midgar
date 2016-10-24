/*
** my_param_in_list.c for  in /home/rouaneq/piscine/jour12/rouane_q/my_param_in_list
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Wed Oct 29 09:30:13 2014 ROUANET Quentin
** Last update Fri Oct 31 15:11:58 2014 ROUANET Quentin
*/

#include "../perso.h"
#include <stdlib.h>

t_funct		*my_put_in_list(char *arg, int (*cmd)(t_perso*, t_perso*),
				t_funct *prev)
{
  t_funct	*next;

  next = malloc(sizeof(t_funct));
  next->cmp = my_strdup(arg);
  next->attaque = cmd;
  next->next = prev;
  return (next);
}
