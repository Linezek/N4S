/*
** my_strncmp.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 23:30:08 2016 Antoine Galpin
** Last update Sun May 29 23:30:41 2016 Antoine Galpin
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  if (n > 0)
    {
      if (s1[0] == s2[0])
	{
	  if (s1[0] == s2[0])
	    return (0);
	  return (my_strncmp(s1 + 1, s2 + 1, n - 1));
	}
      else
	return (s1[0] - s2[0]);
    }
  else
    return (0);
}
