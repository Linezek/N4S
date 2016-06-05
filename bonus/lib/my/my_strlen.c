/*
** my_strlen.c for sdq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 23:29:33 2016 Antoine Galpin
** Last update Sun May 29 23:30:43 2016 Antoine Galpin
*/

int	my_strlen(char *str)
{
  int	len;

  len = 0;
  while (str[len])
    {
      len = len + 1;
    }
  return (len);
}
