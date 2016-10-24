/*
** main.c for  in /home/rouaneq/piscine/midgar/rouane_q
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 30 19:23:34 2014 ROUANET Quentin
** Last update Sat Nov  1 12:45:03 2014 ROUANET Quentin
*/

#include "perso.h"

// fonction qui affiche les stats du joueur passe en param

void		my_put_stat(t_perso *player)
{
  my_putstr("Je suis ");
  my_putstr(player->name);
  my_putstr("\nEt j'ai \e[1;32m");
  my_put_nbr(player->pv);
  my_putstr(" pv\e[0;m\nAinsi que \e[1;34m");
  my_put_nbr(player->mp);
  my_putstr(" mp\e[0;m\n\n");
}

// fonction d'initialisation des joueurs

void		init_char(t_perso *player, char *name, int pv, int mp, int stat)
{
  player->name = my_strdup(name);
  player->pv = pv;
  player->mp = mp;
  player->potion = 0;
  player->ether = 0;
  player->is_boss = 0;
  if (stat == 1)
    {
      player->potion = 5;
      player->ether = 5;
      logoFFVII();
    }
  my_put_stat(player);
}

// fonction main

int		main(int ac, char **av)
{
  t_perso	*player;
  t_perso	*ennemy;
  int		nb_ennemy;

  if (ac != 3 || my_strcmp(av[1], "-n") != 0)
    my_putstr("USAGE : ./ragnarok -n nom_du_heros\n");
  else
    {
      srand(time(NULL));
      nb_ennemy = rand() % 3 + 1;
      player = malloc(sizeof(t_perso));
      ennemy = malloc(sizeof(t_perso));
      if (player != NULL && ennemy != NULL)
	{
	  init_char(player, av[2], 100, 30, 1);
	  while (nb_ennemy-- > 0)
	    {
	      init_char(ennemy, "Klothar", 75, 20, 0);
	      combat(player, ennemy, &nb_ennemy);
	      free(ennemy->name);
	    }
	  free_perso_and_launch_boss(player, ennemy, nb_ennemy);
	}
    }
  return (0);
}
