# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 19:10:07 by mudoh             #+#    #+#              #
#    Updated: 2022/11/15 19:42:55 by mudoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_isprint.c \
        ft_isalnum.c \
    	ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_atoi.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strchr.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_tolower.c \
    	ft_toupper.c \
        ft_strdup.c \
		ft_calloc.c \
		
		
		

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
	@echo "success"
	
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