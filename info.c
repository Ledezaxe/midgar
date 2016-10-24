/*
** info.c for  in /home/prajet_l/battle for midgar/rouane_q/quete1
** 
** Made by PRAJET lorys
** Login   <prajet_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 15:27:28 2014 PRAJET lorys
** Last update Sat Nov  1 12:02:12 2014 ROUANET Quentin
*/

#include "perso.h"

int	coup_critique(int dmg)
{
  if (rand() % 25 == 21)
    {
      my_putstr("ECHEC CRITIQUE !!! x_x\n");
      return (0);
    }
  if (rand() % 10 == 5)
    {
      my_putstr("COUP CRITIQUE !!! ;)\n");
      return (dmg + (dmg * 20 / 100));
    }
  return (dmg);
}

int	stat(t_perso *player, t_perso *enemi)
{
  my_put_stat(player);
  enemi->pv = enemi->pv;
  return (0);
}

int	libra(t_perso *player, t_perso *enemi)
{
  if (player->mp > 0)
    {
      player->mp -= 1;
      my_put_stat(enemi);
      return (1);
    }
  my_putstr("mana insufisant\n");
  return (0);
}
