/*
** objets.c for  in /home/rouaneq/piscine/midgar/rouane_q/quete2
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Fri Oct 31 18:07:44 2014 ROUANET Quentin
** Last update Fri Oct 31 18:34:01 2014 ROUANET Quentin
*/

#include "perso.h"

int	potion(t_perso *player, t_perso *enemy)
{
  if (player->potion < 1)
    {
      my_putstr("Plus de potions en stock :/\n");
      return (0);
    }
  player->potion -= 1;
  player->pv += 30;
  if (player->pv > 100)
    player->pv = 100;
  my_putstr("Vous avez utilise une potion\n");
  enemy->pv = enemy->pv;
  return (1);
}

int	ether(t_perso *player, t_perso *enemy)
{
  if (player->ether < 1)
    {
      my_putstr("Plus d'ethers en stock :/\n");
      return (0);
    }
  player->potion -= 1;
  player->mp += 12;
  if (player->mp > 30)
    player->mp = 30;
  my_putstr("Vous avez utilise un ether\n");
  enemy->pv = enemy->pv;
  return (1);
}
