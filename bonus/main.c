/*
** main.c for eza in /home/galpin_a/train_lapin
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Wed May 11 21:25:07 2016 Antoine Galpin
** Last update Sun May 29 20:40:48 2016 Antoine Galpin
*/

#include <lapin.h>
#include "n4s.h"

t_bunny_response	my_exit(t_bunny_event_state state,
			     t_bunny_keysym keysym,
			     void *data)
{
  (void)state;
  (void)data;
  if (keysym == BKS_ESCAPE)
    return (EXIT_ON_SUCCESS);
  else
    return (GO_ON);
}

t_bunny_response	mainloop(void *data)
{
  t_tek			*tek;

  tek = data;
  bunny_display(tek->win);
  return (GO_ON);
}

int			play(t_tek *tek)
{
  tek->win = bunny_start(500, 500, false, "name");
  tek->pix = bunny_new_pixelarray(500, 500);
  if ((tek->connected = bunny_load_pixelarray("connected.jpg")) == NULL)
    return (-1);
  if ((tek->disconnected = bunny_load_pixelarray("disconnected.jpg")) == NULL)
    return (-1);
  return (GO_ON);
}

int			main(int ac, char **av)
{
  t_tek			*tek;

  (void)ac;
  (void)av;
  if ((tek = bunny_malloc(sizeof(t_tek))) == NULL)
    return (-1);
  if ((play(tek) == -1))
    return (-1);
  bunny_blit(&tek->win->buffer, &tek->disconnected->clipable, NULL);
  bunny_set_loop_main_function(mainloop);
  bunny_set_key_response(my_exit);
  bunny_set_joy_connect_response(my_connect);
  bunny_set_joy_button_response(my_button);
  bunny_set_joy_axis_response(my_axis);
  bunny_loop(tek->win, 90, tek);
  bunny_stop(tek->win);
  return (0);
}
