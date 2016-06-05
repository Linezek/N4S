/*
** my_strdup.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 23:29:59 2016 Antoine Galpin
** Last update Sun May 29 23:30:43 2016 Antoine Galpin
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*s;

  if ((s = malloc(my_strlen(str))) == 0)
    {
      return (0);
    }
  my_strcpy(s, str);
  return (s);
}
