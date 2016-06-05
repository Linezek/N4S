/*
** colle.h for eza in /home/galpin_a/train_lapin
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Wed May 11 21:30:23 2016 Antoine Galpin
** Last update Sun May 29 21:31:32 2016 Antoine Galpin
*/

#ifndef COLLE_1_
# define COLLE_1_
# include "xbox.h"

#include "lib/my/my.h"

typedef	struct		s_tek
{
  t_bunny_window	*win;
  t_bunny_pixelarray	*pix;
  t_bunny_pixelarray	*connected;
  t_bunny_pixelarray	*disconnected;
}			t_tek;

t_bunny_response	my_connect(t_bunny_event_state state,
				   int joyid,
				   const t_bunny_joystick *joyinfo,
				   void *data);
t_bunny_response	my_button(t_bunny_event_state state,
				  int joyid,
				  int button,
				  void *data);
t_bunny_response	my_axis(int joyid,
				t_bunny_axis axis,
				float value,
				void *data);
void			my_cmd(char *str);
void			forward(float value);
void			backward(float value);
void			left(float value);
void			right(float value);

#endif /*!COLLE_1_*/
