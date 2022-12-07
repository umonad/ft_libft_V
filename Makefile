# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mudoh <mudoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 19:10:07 by mudoh             #+#    #+#              #
#    Updated: 2022/12/07 19:05:10 by mudoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_strlen.c \
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
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_itoa.c \
		ft_putnbr_fd.c \

CFLAGS = -Wall -Wextra -Werror

CC = gcc

OBJ = $(SRC:.c=.o)

HEAD = ./includes/

AR = ar rsc

RM = rm -f

NAME = libft.a

.c.o:
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $(<:.c=.o)

all: $(NAME)
	@echo "success"
	
$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	
	$(RM) $(OBJ)
	clear

fclean:
	$(RM) $(NAME) $(OBJ)
	clear
	
re : fclean all

.PHONY : clean fclean all
