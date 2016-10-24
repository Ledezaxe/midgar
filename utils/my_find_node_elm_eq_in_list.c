/*
** my_find_node_elm_eq_in_list.c for  in /home/rouaneq/piscine/jour13/rouane_q/my_find_node_elm_eq_in_list
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 30 09:32:54 2014 ROUANET Quentin
** Last update Fri Oct 31 15:14:01 2014 ROUANET Quentin
*/

#include <stdlib.h>
#include "../perso.h"

t_funct	*my_find_node_elm_eq_in_list(t_funct *begin, char *data_ref)
{
  while (begin != NULL)
    {
      if (my_strcmp(data_ref, begin->cmp) == 0)
	return (begin);
      begin = begin->next;
    }
  return (NULL);
}
