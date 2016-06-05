##
## Makefile for azert in /home/galpin_a/galpin_a/rendu/infographie/test
## 
## Made by Galpin
## Login   <galpin_a@epitech.net>
## 
## Started on  Wed Nov 18 15:58:45 2015 Galpin
## Last update Sun May 29 20:39:28 2016 Antoine Galpin
##

NAME		= ia

LDFLAGS		+= -I/home/$(USER)/.froot/include
LDFLAGS		+= -L/home/$(USER)/.froot/lib/ -llapin
LDFLAGS		+= -L/usr/$(USER)/local/lib \
		   -lsfml-audio \
		   -lsfml-graphics \
		   -lsfml-window \
		   -lsfml-system \
		   -lstdc++ -ldl \
		   -lm

CFLAGS          += -W -Wall -ansi -pedantic -Werror \

SRCS		+= main.c \
		   my_joy.c \
		   move.c

LDFLAGS		+= lib/libmy.a

OBJS		= $(SRCS:.c=.o)

CC		= gcc -g3

ECHO		+= echo -e

MV		+= mv ia ../

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	cd lib/my; make	
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)
	$(MV)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mAll compiled\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	cd lib/my; make clean
	$(RM) $(OBJS)
	@$(ECHO) '\033[01;31m-----------------\033[01;31m->\033[01;33mAll clean\033[01;31m<-\033[01;31m----------------\033[01;00m'

fclean: clean
	cd lib/my; make	fclean
	$(RM) $(NAME)
	@$(ECHO) '\033[01;36m---------------\033[01;36m->\033[01;36mBinary clean\033[01;36m<-\033[01;36m---------------\033[01;00m'

re: fclean all

.PHONY: all clean fclean re
