/*
** direction.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/src
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:22:25 2016 Antoine Galpin
** Last update Sun May 29 21:42:13 2016 Antoine Galpin
*/

#include "n4s.h"

void	go_forward(int *ray, int max)
{
  my_cmd("wheels_dir:0", true, true);
  if (ray[max] < 100)
    my_cmd("car_forward:0.1", true, true);
  if (ray[max] < 300)
    my_cmd("car_forward:0.2", true, true);
  if (ray[max] < 500)
    my_cmd("car_forward:0.3", true, true);
  else if (ray[max] < 1000)
    my_cmd("car_forward:0.7", true, true);
  else if (ray[max] < 2000)
    my_cmd("car_forward:0.8", true, true);
  else
    my_cmd("car_forward:1", true, true);
}

void	turn(char *wheels, char *speed)
{
  my_cmd("wheels_dir:", false, false);
  my_cmd(wheels, true, true);
  my_cmd("car_forward:", false, false);
  my_cmd(speed, true, true);
}

void	go_right(int *ray, int max)
{
  if (ray[max] < 200)
    turn("1", "0.07");
  else if (ray[max] < 300)
    turn("0.6", "0.1");
  else if (ray[max] < 500)
    turn("0.5", "0.2");
  else if (ray[max] < 1000)
    turn("0.2", "0.3");
  else if (ray[max] < 2000)
    turn("0.1", "0.4");
  else
    turn("0.05", "0.6");
}

void	go_left(int *ray, int max)
{
  if (ray[max] < 200)
    turn("-1", "0.07");
  else if (ray[max] < 300)
    turn("-0.6", "0.1");
  else if (ray[max] < 500)
    turn("-0.5", "0.2");
  else if (ray[max] < 1000)
    turn("-0.2", "0.3");
  else if (ray[max] < 2000)
    turn("-0.1", "0.4");
  else
    turn("-0.05", "0.6");
}
