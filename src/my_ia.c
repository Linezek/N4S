/*
** ia.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:22:20 2016 Antoine Galpin
** Last update Sun May 29 23:24:17 2016 Antoine Galpin
*/

#include "n4s.h"

static int	*get_ray(const char *str)
{
  int		i;
  int		j;
  int		*ray;
  char		**array;

  i = -1;
  j = 0;
  array = str_to_wordtab(str, ':');
  if ((ray = malloc(sizeof(int) * 32)) == NULL)
    return (NULL);
  while (array[++i])
    if (i != 0 && array[i][0] >= '0' && array[i][0] <= '9')
      ray[j++] = my_atoi(array[i]);
  return (ray);
}

static int	get_max(int *ray)
{
  int	i;
  int	k;
  int	max;
  int	*avg;
  int	value;

  i = -1;
  max = 0;
  avg = malloc(sizeof(int) * 32);
  while (ray[++i])
    if (ray[i] > max)
      max = ray[i];
  k = 0;
  i = -1;
  while (ray[++i])
    if (ray[i] == max || ray[i] >= 3000)
      avg[k++] = i;
  i = -1;
  value = 0;
  while (avg[++i])
    value += avg[i];
  if (i)
    value /= i;
  return (value);
}

int	stop_car(void)
{
  my_cmd("car_forward:0", true, true);
  my_cmd("cycle_wait:5", true, true);
  my_cmd("stop_simulation", true, true);
  return (0);
}

void	get_the_max(int *ray, int max)
{
  if (max < 13)
    go_right(ray, max);
  else if (max < 23)
    go_forward(ray, max);
  else
    go_left(ray, max);
}

int	main(void)
{
  int	i;
  int	*ray;
  int	max;
  char	**sim;

  my_cmd("start_simulation", true, true);
  while (42)
    {
      my_cmd("GET_INFO_LIDAR", false, true);
      ray = get_ray(get_next_line(0));
      my_cmd("GET_INFO_SIMTIME", false, true);
      sim = str_to_wordtab(get_next_line(0), ':');
      if (!my_strcmp(sim[4], "Track Cleared"))
	return (stop_car());
      max = get_max(ray);
      i = ray[31] - ray[0];
      if (check_side(ray, i) == true);
      else if (ray[0] < 300 && ray[31] > 300)
	my_cmd("wheels_dir:-0.2", true, true);
      else if (ray[30] < 300 && ray[0] > 300)
	my_cmd("wheels_dir:0.2", true, true);
      get_the_max(ray, max);
    }
  return (0);
}
