/*
** put_cmd.c for sdq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 20:42:39 2016 Antoine Galpin
** Last update Sun May 29 21:36:12 2016 Antoine Galpin
*/

#include "n4s.h"

void	my_cmd(const char *str, const bool gnl, const bool newline)
{
  while (*str)
    write(1, str++, 1);
  if (newline == true)
    write(1, "\n", 1);
  if (gnl == true)
    get_next_line(0);
}
