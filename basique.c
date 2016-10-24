/*
** basique.c for  in /home/prajet_l/battle for midgar/rouane_q/quete1
**
** Made by PRAJET lorys
** Login   <prajet_l@etna-alternance.net>
**
** Started on  Fri Oct 31 15:43:01 2014 PRAJET lorys
** Last update Sat Nov  1 11:45:03 2014 ROUANET Quentin
*/

#include "perso.h"

int	attack(t_perso *player, t_perso *enemy)
{
  int	dmg;

  dmg = coup_critique(7);
  enemy->pv -= dmg;
  my_putstr(player->name);
  my_putstr(" a retire \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(enemy->name);
  my_putchar('\n');
  return (1);
}

int	slash(t_perso *player, t_perso *enemy)
{
  int	dmg;

  player->pv -= 2;
  dmg = coup_critique(10);
  enemy->pv -= dmg;
  my_putstr(player->name);
  my_putstr(" a retire \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(enemy->name);
  my_putstr(", mais se blesse et perd\e[0;33m 2 pv\e[0;m\n");
  return (1);
}

int	ultima(t_perso *player, t_perso *enemy)
{
  if (coup_critique(100) != 100)
    {
      my_putstr("l'attaque ultima vous a tue. x_x\n");
      player->pv = -1;
    }
  else
    {
      my_putstr("l'attaque ultima a atteint sa cible. ;)\n");
      enemy->pv = -1;
    }
  return (1);
}
