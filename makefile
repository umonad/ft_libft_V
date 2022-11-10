# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:45:20 by mudoh             #+#    #+#              #
#    Updated: 2022/11/10 15:42:22 by mudoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -fr

all: $(NAME)
	@echo "ca marche"
$(NAME) : $(OBJS)
	 $(AR) $(NAME) $(OBJS)

clean:
	
	@rm -f $(OBJS)
	clear

fclean:
	
	@rm -f $(NAME) $(OBJS)
	clear

re: fclean all

.PHONY : clean fclean