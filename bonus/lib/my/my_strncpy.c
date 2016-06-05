/*
** my_strncpy.c for eazea in /home/antoine/rendu/CPE/CPE_2015_lemin/lib/my
**
** Made by galpin
** Login   <antoine@epitech.net>
**
** Started on  Mon Mar 28 13:24:55 2016 galpin
** Last update Mon Mar 28 13:26:12 2016 galpin
*/

char	*my_strncpy(char *dest, char *src, int nb)
{
  int	i;

  i = 0;
  while (src[i] && i < nb)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if (!src[nb - 1])
    dest[i] = '\0';
  return (dest);
}
