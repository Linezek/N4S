/*
** get_next_line.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:22:53 2016 Antoine Galpin
** Last update Sun May 29 21:42:42 2016 Antoine Galpin
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "n4s.h"

char		*get_next_line(const int fd)
{
  static t_gnl	var;

  if (((var.i == 0 && (var.r = read(fd, var.buf, READ_SIZE)) < 1))
      || (var.j == 0 && (var.line = malloc(LINE_MAX)) == NULL))
    return (NULL);
  while (var.i != var.r)
    {
      if (!var.buf[var.i] || var.buf[var.i] == '\n')
	{
	  var.i++;
	  var.line[var.j] = 0;
	  var.j = 0;
	  return (var.line);
	}
      var.line[var.j++] = var.buf[var.i++];
    }
  var.i = 0;
  return (get_next_line(fd));
}
