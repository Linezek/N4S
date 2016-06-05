/*
** check_side.c for ds in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:22:33 2016 Antoine Galpin
** Last update Sun May 29 21:41:47 2016 Antoine Galpin
*/

#include "n4s.h"

void	back_left()
{
  my_cmd("CAR_BACKWARDS:0.7", true, true);
  my_cmd("WHEELS_DIR:-1", true, true);
  my_cmd("CYCLE_WAIT:1", true, true);
  my_cmd("WHEELS_DIR:0", true, true);
  my_cmd("CAR_BACKWARDS:0", true, true);
}

void	back_right()
{
  my_cmd("CAR_BACKWARDS:0.7", true, true);
  my_cmd("WHEELS_DIR:1", true, true);
  my_cmd("CYCLE_WAIT:1", true, true);
  my_cmd("WHEELS_DIR:0", true, true);
  my_cmd("CAR_BACKWARDS:0", true, true);
}

bool	turning_left()
{
  my_cmd("WHEELS_DIR:-1", true, true);
  my_cmd("CAR_FOWARD:0.5", true, true);
  my_cmd("WHEELS_DIR:0", true, true);
  return (true);
}

bool	turning_right()
{
  my_cmd("WHEELS_DIR:1", true, true);
  my_cmd("CAR_FOWARD:0.5", true, true);
  my_cmd("WHEELS_DIR:0", true, true);
  return (true);
}

bool	check_side(int *ray, int i)
{
  if (ray[0] < 60 || ray[31] < 60)
    {
      if (i <= 15)
	back_left();
      else
	back_right();
    }
  if (ray[0] < 100)
    return (turning_left());
  else if (ray[31] < 100)
    return (turning_right());
  return (false);
}
