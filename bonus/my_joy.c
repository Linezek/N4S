/*
** my_joy.c for dsq in /home/galpin_a/rendu/CPE/CPE_2015_n4s/bonus
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Sun May 29 19:27:50 2016 Antoine Galpin
** Last update Sun May 29 20:27:19 2016 Antoine Galpin
*/

#include <lapin.h>
#include <stdio.h>
#include "n4s.h"

t_bunny_response		my_connect(t_bunny_event_state state,
					   int joyid,
					   const t_bunny_joystick *joyinfo,
					   void *data)
{
  t_tek				*tek;

  (void)state;
  (void)joyid;
  tek = data;
  if (joyinfo->connected == true)
    {
      my_cmd("START_SIMULATION\n");
      bunny_blit(&tek->win->buffer, &tek->connected->clipable, NULL);
    }
  else
    bunny_blit(&tek->win->buffer, &tek->disconnected->clipable, NULL);
  return (GO_ON);
}

t_bunny_response		my_button(t_bunny_event_state state,
					  int joyid,
					  int button,
					  void *data)
{
  (void)state;
  (void)data;
  (void)joyid;
  if (button == BUTTON_BACK)
    return (EXIT_ON_SUCCESS);
  return (GO_ON);
}

t_bunny_response		my_axis(int joyid,
					t_bunny_axis axis,
					float value,
					void *data)
{
  (void)joyid;
  (void)value;
  (void)data;
  if (axis == AXIS_LJ_Y)
    {
      forward(value);
      backward(value);
    }
  if (axis == AXIS_RJ_X)
    {
      left(value);
      right(value);
    }
  return (GO_ON);
}
