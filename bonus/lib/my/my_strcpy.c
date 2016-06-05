/*
** my_strcpy.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 23:29:37 2016 Antoine Galpin
** Last update Sun May 29 23:30:43 2016 Antoine Galpin
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
