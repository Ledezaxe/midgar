/*
** combat.c for  in /home/rouaneq/piscine/midgar/rouane_q
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 30 20:01:11 2014 ROUANET Quentin
** Last update Sat Nov  1 17:32:30 2014 ROUANET Quentin
*/

#include "perso.h"

/* fonction qui initialise la liste chaine de pointeur sur fonction
** pour les attaques
** les attaques sont en majuscules pour gerer la casse
*/

t_funct		*init_fonction()
{
  t_funct	*ret;

  ret = my_put_in_list("ATTACK", attack, NULL);
  ret = my_put_in_list("SLASH", slash, ret);
  ret = my_put_in_list("FIRE", fire, ret);
  ret = my_put_in_list("THUNDER", thunder, ret);
  ret = my_put_in_list("STAT", stat, ret);
  ret = my_put_in_list("LIBRA", libra, ret);
  ret = my_put_in_list("POTION", potion, ret);
  ret = my_put_in_list("ETHER", ether, ret);
  ret = my_put_in_list("HEAL", heal, ret);
  ret = my_put_in_list("ULTIMA", ultima, ret);
  ret = my_put_in_list("HELP", help, ret);
  ret = my_put_in_list("CREDIT", credit, ret);
  ret = my_put_in_list("ZENTETSUKEN", zentetsuken, ret);
  return (ret);
}

// fonction qui gere le tour de l'ennemi

int		ennemy_tour(t_perso *player, t_perso *ennemy)
{
  int		attaque;
  int		ret;

  attaque = rand() % 4;
  if (attaque == 0)
    ret = bite(ennemy, player);
  else if (attaque == 1)
    ret = earthquake(ennemy, player);
  else if (attaque == 2)
    ret = doom(ennemy, player);
  else
    ret = death(ennemy, player);
  return (ret);
}

// fonction qui gere le tour du joueur

int		player_tour(t_perso *player, t_perso *ennemy,
			    t_funct *funct, int *end)
{
  char		*str;
  t_funct	*apply;

  my_putstr("\nvotre tour> ");
  str = readLine();
  if (str == NULL)
    *end = -1;
  else
    {
      apply = my_find_node_elm_eq_in_list(funct, my_strupcase(str));
      if (apply != NULL)
	{
	  free(str);
	  return (apply->attaque(player, ennemy));
	}
      if (my_strcmp(my_strupcase(str), "QUIT") == 0)
	{
	  my_putstr("La fuite n'est pas une solution\nI WILL FIND YOU !\n");
	  *end = 1;
	}
      else
	my_putstr("l'attaque n'existe pas\n");
      free(str);
    }
  return (0);
}

// fonction qui verifie l'etat (pv) des persos

int		check_perso(t_perso *player, t_perso *ennemy)
{
  if (player->pv <= 0)
    {
      my_putstr(player->name);
      my_putstr(" est KO !\nvous avez perdu\n");
      sephiroth_sword();
      return (3);
    }
  else if (ennemy->pv <= 0)
    {
      my_putstr(ennemy->name);
      my_putstr(" s'est fait botter le c** !\nvous avez gagne !\n\n");
      zack_sword();
      return (2);
    }
  return (0);
}

// fonction pour le combat

void		combat(t_perso *player, t_perso *ennemy, int *nb_ennemi)
{
  t_funct	*fonction;
  int		end;
  int		tour;

  fonction = init_fonction();
  end = 0;
  tour = 0;
  while (end == 0)
    {
      if (tour % 2 == 0)
	tour += player_tour(player, ennemy, fonction, &end);
      else
	tour += ennemy_tour(player, ennemy);
      if (end == 0)
	end = check_perso(player, ennemy);
    }
  if (end == -1 || end == 3)
    *nb_ennemi = -2;
  else if (end == 1)
    *nb_ennemi = -1;
  free_list(fonction);
}
