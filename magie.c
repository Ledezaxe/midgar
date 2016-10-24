/*
** magie.c for  in /home/prajet_l/battle for midgar/rouane_q/quete1
** 
** Made by PRAJET lorys
** Login   <prajet_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 15:01:25 2014 PRAJET lorys
** Last update Sat Nov  1 16:31:40 2014 ROUANET Quentin
*/

#include "perso.h"

int		fire(t_perso *player, t_perso *enemy)
{
  int		dmg;

  if (player->mp < 3)
    {
      my_putstr("mana insufisant\n");
      return (0);
    }
  player->mp -= 3;
  dmg = coup_critique(10);
  enemy->pv -= dmg;
  my_putstr(player->name);
  my_putstr(" a inflige \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(enemy->name);
  my_putstr(", mais perd\e[1;36m 3 pm\e[0;m.\n");
  return (1);
}

int		thunder(t_perso *player, t_perso *enemy)
{
  int		dmg;

  if (player->mp < 5)
    {
      my_putstr("mana insufisant\n");
      return (0);
    }
  dmg = coup_critique(15);
  player->mp -= 5;
  enemy->pv -= dmg;
  my_putstr(player->name);
  my_putstr(" a inflige \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(enemy->name);
  my_putstr(", mais perd\e[1;36m 5 pm\e[0;m.\n");
  return (1);
}

int		heal(t_perso *player, t_perso *enemy)
{
  int		dmg;

  if (player->mp < 3)
    {
      my_putstr("mana insufisant\n");
      return (0);
    }
  player->mp -= 3;
  dmg = coup_critique(25);
  player->pv += dmg;
  if (player->pv > 100)
    player->pv = 100;
  my_putstr("Vous avez recupere \e[1;32m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m.\n");
  enemy->pv = enemy->pv;
  return (1);
}

int		zentetsuken(t_perso *player, t_perso *enemy)
{
  static int	dispo;
  int		dmg;

  if (player->mp < 20 || dispo == 1)
    {
      my_putstr("vous ne pouvez pas invoquez \e[1;35modin.\e[0;m\n");
      return (0);
    }
  dispo = 1;
  player->mp -= 20;
  dmg = coup_critique(rand() % 101);
  enemy->pv -= dmg;
  my_putstr("Vous invoquez \e[1;35modin.\e[0;m\n");
  my_putstr("\e[1;33m");
  odin_rules();
  my_putstr("\e[0;m");
  my_putstr(enemy->name);
  my_putstr(" perd \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m mais vous perdez \e[0;36m20 mp\e[0;m.\n");
  return (1);
}
