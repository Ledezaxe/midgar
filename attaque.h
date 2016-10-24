/*
** attaque.h for  in /home/rouaneq/piscine/midgar/rouane_q/quete1
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Fri Oct 31 13:49:02 2014 ROUANET Quentin
** Last update Sat Nov  1 15:18:56 2014 ROUANET Quentin
*/

#ifndef ATTAQUE_H__
# define ATTAQUE_H__

#include "perso.h"

// attaques du heros

int	attack(t_perso *lanceur, t_perso *cible);
int	slash(t_perso *lanceur, t_perso *cible);
int	fire(t_perso *lanceur, t_perso *cible);
int	thunder(t_perso *lanceur, t_perso *cible);
int	stat(t_perso *lanceur, t_perso *cible);
int	libra(t_perso *lanceur, t_perso *cible);
int	heal(t_perso *lanceur, t_perso *cible);
int	potion(t_perso *lanceur, t_perso *cible);
int	ether(t_perso *lanceur, t_perso *cible);
int	ultima(t_perso *lanceur, t_perso *cible);
int	zentetsuken(t_perso *lanceur, t_perso *cible);

// attaques du zero

int	bite(t_perso *lanceur, t_perso *cible);
int	earthquake(t_perso *lanceur, t_perso *cible);
int	doom(t_perso *lanceur, t_perso *cible);

// attaque speciale du boss

int	death(t_perso *lanceur, t_perso *cible);

// fonctions autres

int	help(t_perso *lanceur, t_perso *cible);
int	credit(t_perso *lanceur, t_perso *cible);

#endif /* !ATTAQUE_H__ */
