# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 20:30:56 by jdaly             #+#    #+#              #
#    Updated: 2023/11/29 21:42:43 by jdaly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = main ClapTrap ScavTrap FragTrap

SRC = $(FILES:=.cpp)
OBJ = $(FILES:=.o)
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re