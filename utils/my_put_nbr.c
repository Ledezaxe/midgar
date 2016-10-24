/*
** my_put_nbr.c for  in /home/rouaneq/piscine/jour05/rouane_q/my_put_nbr
** 
** Made by ROUANET Quentin
** Login   <rouane_q@etna-alternance.net>
** 
** Started on  Mon Oct 20 13:37:50 2014 ROUANET Quentin
** Last update Thu Oct 23 14:52:10 2014 ROUANET Quentin
*/

#include <unistd.h>

void	my_putchar(char c);

void    my_put_nbr(int n)
{
  int   sign;

  sign = 0;
  if (n < 0)
    {
      write(1, "-", 1);
      if (n == -2147483648)
        {
	  sign = 1;
          n++;
        }
      n = n * -1;
    }
  if (n >= 10)
    my_put_nbr(n / 10);
  if (sign == 1)
    {
      sign = 0;
      my_putchar(n % 10 + '1');
    }
  else
    my_putchar(n % 10 + '0');
}
