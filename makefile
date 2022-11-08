# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:45:20 by mudoh             #+#    #+#              #
#    Updated: 2022/11/08 15:42:24 by mudoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

RM = rm -fr

all: $(NAME)
	@echo "bhbbuyb"

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