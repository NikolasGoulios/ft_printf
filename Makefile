# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 11:20:16 by ngoulios          #+#    #+#              #
#    Updated: 2024/05/18 12:45:01 by ngoulios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
FLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c /
      ft_putchar.c 

OBJECTS = $(SRC:.c=.O)

%.o: %.c 
	$(CC) $(FLAGS) -o $@ -c $? 
all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
		rm -f $(OBJECTS)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY all clean fclean re
