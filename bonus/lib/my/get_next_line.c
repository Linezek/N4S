/*
** get_next_line.c for alloc in /home/galpin_a/rendu/CPE/get_next_line
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun Jan 17 19:17:40 2016 Galpin
** Last update Mon Mar 28 15:11:46 2016 Alexis Jamet
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

char		*my_alloc_lines(char *imput, int k)
{
  int		i;
  char		*second_line;

  i = 0;
  if (k == 0 && ((imput = malloc(READ_SIZE + 1)) == NULL))
    return (NULL);
  if (k == 0)
    return (imput);
  if ((second_line = malloc(k + READ_SIZE + 1)) == NULL)
    return (NULL);
  while (i <= k)
    {
      second_line[i] = imput[i];
      i = i + 1;
    }
  second_line[i] = '\0';
  free(imput);
  return (second_line);
}

char		*all_done(char *imput, int k)
{
  static int	rest;

  if (k == 0)
    return (NULL);
  if (rest == 0)
    {
      rest = 1;
      return (imput);
    }
  else
    return (NULL);
}

char		*get_next_line(const int fd)
{
  static int	i;
  static char	buffer[READ_SIZE];
  static int	j;
  static int	end;
  static char	*imput;

  if (i == '\0' && (end = read(fd, buffer, READ_SIZE)) < 1)
    return (all_done(imput, j));
  if ((imput = my_alloc_lines(imput, j)) == NULL)
    return (NULL);
  while (i < end)
    {
      if (buffer[i] == '\n')
	{
	  i = i + 1;
	  imput[j] = '\0';
	  j = 0;
	  return (imput);
	}
      imput[j] = buffer[i];
      i = i + 1;
      j = j + 1;
    }
  i = 0;
  get_next_line(fd);
}
