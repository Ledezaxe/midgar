/*
** boss.c for  in /home/rouaneq/piscine/midgar/rouane_q/quete3
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Sat Nov  1 09:31:57 2014 ROUANET Quentin
** Last update Sat Nov  1 11:32:31 2014 ROUANET Quentin
*/

#include "perso.h"

void	init_boss(t_perso *boss)
{
  my_putstr("\n\nUne silhouette se dessine dans la fumee un homme arrive.\n\n");
  boss->is_boss = 1;
  boss->name = my_strdup("Sephiroth");
  boss->pv = 200;
  boss->mp = 50;
  my_put_stat(boss);
}
