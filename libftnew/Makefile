# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hai <hai@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 12:13:09 by hai               #+#    #+#              #
#    Updated: 2023/11/27 12:15:39 by hai              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CCFLAGS = -Wall -Werror -Wextra

HEADER = libft.h

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
        ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
        ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
        ft_toupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
        ft_isprint.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
        ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
        ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	cc -I $(HEADER) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
