/*
** autre.c for  in /home/rouaneq/piscine/midgar/rouane_q/quete3
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Sat Nov  1 12:04:00 2014 ROUANET Quentin
** Last update Sat Nov  1 15:36:50 2014 ROUANET Quentin
*/

#include "perso.h"

int	help(t_perso *lanceur, t_perso *cible)
{
  my_putstr("votre but :\neliminez vos ennemis pour defendre midgard !\n\n");
  my_putstr("liste des attaques :\n");
  my_putstr("attack :\e[0;31m -7 pv\e[0;m\n");
  my_putstr("slash (\e[0;31m-2pv\e[0;m) :\e[0;31m -10 pv\e[0;m\n");
  my_putstr("fire (\e[1;36m-5pm\e[0;m) :\e[0;31m -10pv\e[0;m\n");
  my_putstr("thunder (\e[1;36m-5pm\e[0;m) :\e[0;31m -15pv\e[0;m\n");
  my_putstr("stat : permet de voir votre etat.\n");
  my_putstr("libra (\e[1;36m-1pm\e[0;m) : permet de voir l'etat de l'ennemi\n");
  my_putstr("heal (\e[1;36m-3pm\e[0;m) : soigne \e[0;32m25 % des pv max\e[0;m\n");
  my_putstr("ether : restaure \e[1;34m12pm\e[0;m\n");
  my_putstr("potion : soigne \e[0;32m30pv\e[0;m\n");
  my_putstr("ultima : OS l'ennemi sauf en critique (c'est vous ;p)\n");
  my_putstr("zentetsuken (\e[1;36m-20pm\e[0;m) : \e[1;35modin\e[0;m\n");
  my_putstr("quit : vous fuyer le combat\n");
  my_putstr("credit : affiche les credits du jeu\n");
  my_putstr("help : affiche l'aide (celle la ^^ )\n");
  my_putstr("Bonne Chance !!\n");
  lanceur->pv = lanceur->pv;
  cible->pv = cible->pv;
  return (0);
}

int	credit(t_perso *lanceur, t_perso *cible)
{
  lanceur->pv = lanceur->pv;
  cible->pv = cible->pv;
  my_putstr("credits du jeu :\n");
  my_putstr("Ce jeu a ete cree par Lorys PRAJET et Quentin ROUANET\n");
  my_putstr("Directeur Artistique : Lorys PRAJET\n");
  my_putstr("Developpeur en chef : Quentin ROUANET\n");
  my_putstr("Chefs de projet : Lorys PRAJET et Quentin ROUANET\n");
  my_putstr("Merci d'y jouer et have fun ;)\n");
  return (0);
}
