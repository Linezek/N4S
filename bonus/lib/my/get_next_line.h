/*
** get_next_line.h for getnextline in /home/galpin_a/rendu/CPE/CPE_2015_getnextline
**
** Made by Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Thu Jan  7 10:14:50 2016 Galpin
** Last update Fri Mar 11 22:28:28 2016 Antoine Galpin
*/

#ifndef READ_SIZE
# define READ_SIZE (1)

char	*my_alloc_lines(char *imput, int k);
char	*all_done(char *imput, int k);
char	*get_next_line(const int fd);

#endif /*!READ_SIZE*/
