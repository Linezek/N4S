/*
** n4s.h for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 21:31:54 2016 Antoine Galpin
** Last update Sun May 29 21:40:17 2016 Antoine Galpin
*/

#ifndef		N4S_H_
# define	N4S_H_

#include	<stdbool.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>

# define	LINE_MAX  (4096)
# define	READ_SIZE (42)

typedef struct	s_gnl
{
  int		i;
  int		j;
  int		k;
  int		r;
  int		a;
  char		buf[READ_SIZE];
  char		*line;
}		t_gnl;

char		*get_next_line(const int fd);
void		my_putstr(const char *str);
void		my_cmd(const char *str, const bool gnl, const bool newline);
int		my_strcmp(const char *str1, const char *str2);
int		my_atoi(const char *str);
void		go_forward(int *ray, int max);
void		go_right(int *ray, int max);
void		go_left(int *ray, int max);
void		affichage(int *ray, int max, int i);
bool		check_side(int *ray, int i);
char		**str_to_wordtab(const char *str, const char c);
int		my_strlen(const char *str);
void		turn(char *wheels, char *speed);

#endif		/* !N4S_H_ */
