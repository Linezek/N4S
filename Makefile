##
## Makefile for azert in /home/galpin_a/galpin_a/rendu/infographie/test
## 
## Made by Galpin
## Login   <galpin_a@epitech.net>
## 
## Started on  Wed Nov 18 15:58:45 2015 Galpin
## Last update Sun May 29 20:47:59 2016 Antoine Galpin
##

NAME		= ia

CFLAGS          += -W -Wall -ansi -pedantic -Werror \

SRCS		+= src/side.c \
		   src/tools.c \
		   src/my_ia.c \
		   src/get_next_line.c \
		   src/put_cmd.c \
		   src/move.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc

ECHO		+= echo -e

RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)
	@$(ECHO) '\033[01;34m---------------\033[01;34m->\033[01;32mAll compiled\033[01;34m<-\033[01;34m---------------\033[01;00m'

clean:
	$(RM) $(OBJS)
	@$(ECHO) '\033[01;31m-----------------\033[01;31m->\033[01;33mAll clean\033[01;31m<-\033[01;31m----------------\033[01;00m'

fclean: clean
	$(RM) $(NAME)
	@$(ECHO) '\033[01;36m---------------\033[01;36m->\033[01;36mBinary clean\033[01;36m<-\033[01;36m---------------\033[01;00m'

re: fclean all

.PHONY: all clean fclean re
