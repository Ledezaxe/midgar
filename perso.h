/*
** perso.h for  in /home/rouaneq/piscine/midgar/rouane_q
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Thu Oct 30 19:24:05 2014 ROUANET Quentin
** Last update Sat Nov  1 16:24:30 2014 ROUANET Quentin
*/

#ifndef PERSO_H__
# define PERSO_H__


#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct		s_perso
{
  char			*name;
  int			pv;
  int			mp;
  int			potion;
  int			ether;
  int			is_boss;
}			t_perso;

typedef struct		s_funct
{
  char			*cmp;
  int			(*attaque)(t_perso*, t_perso*);
  struct s_funct	*next;
}			t_funct;

void	odin_rules();
void	zack_sword();
void	sephiroth_sword();
void	init_boss(t_perso *boss);
void	free_perso_and_launch_boss(t_perso *player, t_perso *ennemy, int nb_ennemy);
void	logoFFVII();
void	free_perso(t_perso *player, t_perso *ennemy);
int	coup_critique(int dmg);
void	free_list(t_funct *ptr);
void	my_put_stat(t_perso *player);
void	my_putchar(char c);
t_funct	*my_find_node_elm_eq_in_list(t_funct *begin, char *data_ref);
char	*readLine();
char	*my_strupcase(char *str);
t_funct	*my_put_in_list(char *arg, int (*cmd)(t_perso*, t_perso*), t_funct *prev);
void	combat(t_perso *player, t_perso *ennemy, int *nb_ennemy);
void	init_player(char *name, int pv, int mp);
void	my_putstr(char *str);
void	my_put_nbr(int nbr);
int	my_strcmp(char *s1, char *s2);
char	*my_strdup(char *str);

// header des attaques

#include "attaque.h"

#endif /* !PERSO_H__ */
