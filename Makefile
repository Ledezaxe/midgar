##
## Makefile for  in /home/rouaneq/piscine/midgar/rouane_q
## 
## Made by ROUANET Quentin
## Login   <rouane_q@etna-alternance.net>
## 
## Started on  Thu Oct 30 19:21:39 2014 ROUANET Quentin
## Last update Sat Nov  1 12:33:50 2014 ROUANET Quentin
##

NAME	= ragnarok

SRCS	= main.c \
	  combat.c \
	  utils/my_putstr.c \
	  utils/my_put_nbr.c \
	  utils/my_strcmp.c \
	  utils/my_strdup.c \
	  utils/my_strlen.c \
	  utils/my_strupcase.c \
	  utils/my_params_in_list.c \
	  utils/my_find_node_elm_eq_in_list.c \
	  utils/my_putchar.c \
	  readLine.c \
	  basique.c \
	  info.c \
	  magie.c \
	  free.c \
	  enemy.c \
	  objets.c \
	  logoFFVII.c \
	  boss.c \
	  autre.c

OBJ	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

ECHO	= @echo -e

CFLAGS	+= -W -Wall -Wextra
CFLAGS	+= -Werror

all	: $(NAME)

$(NAME)	: $(OBJ)
	  $(CC) -o $(NAME) $(OBJ)
	  $(ECHO) '\033[0;32m> Compiled\033[0m'

clean	:
	  $(RM) $(OBJ)
	  $(RM) *~
	  $(RM) \#*#
	  $(ECHO) '\033[0;31m> Directory cleaned\033[0m'

fclean	: clean
	  $(RM) $(NAME)
	  $(ECHO) '\033[0;31m> Remove executable\033[0m'

re	: fclean all

.PHONY	: all clean fclean re
