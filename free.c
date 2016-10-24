/*
** free.c for  in /home/rouaneq/piscine/midgar/rouane_q/quete1
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Fri Oct 31 16:12:16 2014 ROUANET Quentin
** Last update Sat Nov  1 15:50:38 2014 ROUANET Quentin
*/

#include "perso.h"

void		free_perso_and_launch_boss(t_perso *player, t_perso *ennemy,
					   int nb_ennemy)
{
  int	nb_boss;

  if (player->pv > 0 && nb_ennemy >= -1)
    {
      sephiroth_sword();
      init_boss(ennemy);
      nb_boss = 1;
      combat(player, ennemy, &nb_boss);
      if (nb_boss == -1)
	{
	  my_putstr("SEPHIROTH VOUS A RETROUVE ... >:)\n");
	  free(ennemy->name);
	  free_perso_and_launch_boss(player, ennemy, 10);
	}
      else
	free(ennemy->name);
    }
  if (nb_ennemy != 10 && nb_ennemy != 2)
    free_perso(player, ennemy);
  }

void		free_perso(t_perso *player, t_perso *ennemy)
{
  free(player->name);
  free(player);
  free(ennemy);
}

void		free_list(t_funct *ptr)
{
  t_funct	*prev;

  while (ptr != NULL)
    {
      prev = ptr;
      ptr = ptr->next;
      free(prev->cmp);
      free(prev);
    }
}
