/*
** move.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:57:42 2016 Antoine Galpin
** Last update Sun May 29 20:22:20 2016 Antoine Galpin
*/

#include <lapin.h>
#include "n4s.h"

void		my_cmd(char *str)
{
  my_putstr(str);
  get_next_line(0);
}

void		forward(float value)
{
  if (value >= -100 && value < -90)
    my_cmd("CAR_FORWARD:1.0\n");
  if (value >= -90 && value < -80)
    my_cmd("CAR_FORWARD:0.9\n");
  if (value >= -80 && value < -70)
    my_cmd("CAR_FORWARD:0.8\n");
  if (value >= -70 && value < -60)
    my_cmd("CAR_FORWARD:0.7\n");
  if (value >= -60 && value < -50)
    my_cmd("CAR_FORWARD:0.6\n");
  if (value >= -50 && value < -40)
    my_cmd("CAR_FORWARD:0.5\n");
  if (value >= -40 && value < -30)
    my_cmd("CAR_FORWARD:0.4\n");
  if (value >= -30 && value < -20)
    my_cmd("CAR_FORWARD:0.3\n");
  if (value >= -20 && value < -10)
    my_cmd("CAR_FORWARD:0.2\n");
  if (value >= -10 && value < 0)
    my_cmd("CAR_FORWARD:0.2\n");
  if (value == 0)
    my_cmd("CAR_FORWARD:0.0\n");
}

void		backward(float value)
{
  if (value <= 100 && value > 90)
    my_cmd("CAR_BACKWARDS:1.0\n");
  if (value <= 90 && value > 80)
    my_cmd("CAR_BACKWARDS:0.9\n");
  if (value <= 80 && value > 70)
    my_cmd("CAR_BACKWARDS:0.8\n");
  if (value <= 70 && value > 60)
    my_cmd("CAR_BACKWARDS:0.7\n");
  if (value <= 60 && value > 50)
    my_cmd("CAR_BACKWARDS:0.6\n");
  if (value <= 50 && value > 40)
    my_cmd("CAR_BACKWARDS:0.5\n");
  if (value <= 40 && value > 30)
    my_cmd("CAR_BACKWARDS:0.4\n");
  if (value <= 30 && value > 20)
    my_cmd("CAR_BACKWARDS:0.3\n");
  if (value <= 20 && value > 10)
    my_cmd("CAR_BACKWARDS:0.2\n");
  if (value <= 10 && value > 0)
    my_cmd("CAR_BACKWARDS:0.1\n");
  if (value == 0)
    my_cmd("CAR_BACKWARDS:0.0\n");
}

void		left(float value)
{
  if (value <= 100 && value > 90)
    my_cmd("WHEELS_DIR:-0.3\n");
  if (value <= 90 && value > 60)
    my_cmd("WHEELS_DIR:-0.2\n");
  if (value <= 60 && value > 30)
    my_cmd("WHEELS_DIR:-0.1\n");
  if (value <= 30 && value > 0)
    my_cmd("WHEELS_DIR:-0.1\n");
  if (value == 0)
    my_cmd("WHEELS_DIR:0.0\n");
}

void		right(float value)
{
  if (value >= -100 && value < -90)
    my_cmd("WHEELS_DIR:0.3\n");
  if (value >= -90 && value < -60)
    my_cmd("WHEELS_DIR:0.2\n");
  if (value >= -60 && value < -30)
    my_cmd("WHEELS_DIR:0.1\n");
  if (value >= -30 && value < 0)
    my_cmd("WHEELS_DIR:0.1\n");
  if (value == 0)
    my_cmd("WHEELS_DIR:0.0\n");
}
