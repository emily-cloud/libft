# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hai <hai@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 12:13:09 by hai               #+#    #+#              #
#    Updated: 2024/05/16 16:52:37 by hai              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CCFLAGS = -Wall -Werror -Wextra -I headers/

HEADER = $(addsuffix .h, $(addprefix headers/, libft get_next_line ft_printf))

FTIS = alnum alpha ascii digit print

FTMEM = bzero calloc memchr memcmp memcpy memmove memset

FTPUT = char_fd char endl_fd endl nbr_fd nbr str_fd str

FTSTR = chr dup iteri join lcat lcpy len mapi ncmp nstr rchr trim

FTSUB = split substr

FTTO = atoi_l atoi itoa tolower toupper

FTEX = gnl/get_next_line printf/ft_printf

FTPRF = hex utils

FTGNL = utils

SRC = $(addsuffix .c, $(addprefix ft_is/ft_is, $(FTIS))) \
		$(addsuffix .c, $(addprefix ft_mem/ft_, $(FTMEM))) \
		$(addsuffix .c, $(addprefix ft_put/ft_put, $(FTPUT))) \
		$(addsuffix .c, $(addprefix ft_str/ft_str, $(FTSTR))) \
		$(addsuffix .c, $(addprefix ft_str/ft_, $(FTSUB))) \
		$(addsuffix .c, $(addprefix ft_to/ft_, $(FTTO))) \
		$(addsuffix .c, $(addprefix ft_, $(FTEX))) \
		$(addsuffix .c, $(addprefix ft_printf/ft_print_, $(FTPRF))) \
		$(addsuffix .c, $(addprefix ft_gnl/get_next_line_, $(FTGNL))) \

OBJ = $(SRC:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	echo "\n\n\033[0;32mCompiling libft..."
	ar rc $(NAME) $^
	ranlib $(NAME)
	echo "\033[0m"

%.o: %.c
	printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC) $(HEADER)

.PHONY: all clean fclean re
