/*
** enemy.c for  in /home/prajet_l/battle for midgar/rouane_q/quete1
** 
** Made by PRAJET lorys
** Login   <prajet_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 16:03:23 2014 PRAJET lorys
** Last update Sat Nov  1 11:51:14 2014 ROUANET Quentin
*/

#include "perso.h"

int	bite(t_perso *enemy, t_perso *player)
{
  int	dmg;

  if (enemy->is_boss == 1)
    dmg = coup_critique(12);
  else
    dmg = coup_critique(6);
  player->pv -= dmg;
  my_putstr(enemy->name);
  my_putstr(" a retire \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(player->name);
  my_putchar('\n');
  return (1);
}

int	earthquake(t_perso *enemy, t_perso *player)
{
  int	dmg;

  enemy->pv -= 3;
  if (enemy->is_boss == 1)
    dmg = coup_critique(30);
  else
    dmg = coup_critique(15);
  player->pv -= dmg;
  my_putstr(enemy->name);
  my_putstr(" a retire \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(player->name);
  my_putstr(", mais se blesse en attaquant.\n");
  return (1);
}

int	doom(t_perso *enemy, t_perso *player)
{
  int	dmg;

  if (enemy->mp == 0)
    {
      my_putstr("l'ennemi n'a plus de mana.\n");
      return (0);
    }
  if (enemy->is_boss == 1)
    dmg = coup_critique(22);
  else
    dmg = coup_critique(11);
  enemy->mp -= 5;
  player->pv -= dmg;
  my_putstr(enemy->name);
  my_putstr(" a retire \e[0;31m");
  my_put_nbr(dmg);
  my_putstr(" pv\e[0;m a ");
  my_putstr(player->name);
  my_putstr(", et utilise \e[1;36m5 pm\e[0;m.\n");
  return (1);
}

int	death(t_perso *enemy, t_perso *player)
{
  if (enemy->is_boss == 1)
    {
      if (rand() % 35 == 15)
	{
	  player->pv = 0;
	  my_putstr("Sephiroth vous a tue, vous voyez votre ame partir...x_x\n");
	}
      else
	my_putstr("Sephiroth vous a lance son attaque speciale mais a echoue ! ;)\n");
      return (1);
    }
  return (0);
}
