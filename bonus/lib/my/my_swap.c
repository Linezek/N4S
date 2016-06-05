/*
** my_swap.c for dq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 23:29:26 2016 Antoine Galpin
** Last update Sun May 29 23:30:44 2016 Antoine Galpin
*/

int	my_swap(int *a, int *b)
{
  int	d;

  d = *a;
  *a = *b;
  *b = d;
}
