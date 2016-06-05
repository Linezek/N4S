/*
** utils.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:22:08 2016 Antoine Galpin
** Last update Sun May 29 21:38:01 2016 Antoine Galpin
*/

#include "n4s.h"

char	**str_to_wordtab(const char *str, const char c)
{
  int	i;
  int	j;
  int	k;
  char	**tab;

  i = 0;
  j = 0;
  tab = malloc(sizeof(char **) * my_strlen(str));
  while (str[i])
    {
      k = 0;
      tab[j] = malloc(sizeof(char *) * my_strlen(str));
      while ((str[i] == c) && str[i++]);
      while (str[i] != c && str[i])
	tab[j][k++] = str[i++];
      tab[j++][k] = 0;
      while ((str[i] == c) && str[i++]);
    }
  tab[j] = NULL;
  return (tab);
}


int	my_strlen(const char *str)
{
  int	i;

  i = -1;
  while (str[++i]);
  return (i);
}

int	my_strcmp(const char *str1, const char *str2)
{
  int	i;

  i = 0;
  while (str1[i] && str1[i] == str2[i])
    i++;
  return (str1[i] - str2[i]);
}

void	my_putstr(const char *str)
{
  while (*str)
    write(2, str++, 1);
  write(2, "\n", 1);
}

int	my_atoi(const char *str)
{
  int	i;
  int	nb;

  i = -1;
  nb = 0;
  while (str[++i])
    if (str[i] >= '0' && str[i] <= '9')
      {
	nb *= 10;
	nb += str[i] - '0';
      }
    else if (str[i] == '.')
      break;
  return (nb);
}
