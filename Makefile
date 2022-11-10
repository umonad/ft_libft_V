# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 19:10:07 by mudoh             #+#    #+#              #
#    Updated: 2022/11/10 19:52:25 by mudoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c

FLAGS = -Wall -Wextra -Werror
CC = gcc

OBJS = $(SRCS:.c=.o)

HEAD = ./includes/

AR = ar rsc

RM = rm -f

NAME = libft.a

.c.o:
	$(CC) $(FLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)
	@echo "succes"
	
$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	
	$(RM) $(OBJS)
	clear

fclean:

	$(RM) $(NAME) $(OBJS)
	clear
	
re : fclean all

.PHONY : clean fclean all