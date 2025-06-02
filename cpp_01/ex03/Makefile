# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 09:26:16 by guphilip          #+#    #+#              #
#    Updated: 2025/06/02 09:26:57 by guphilip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
SRC  = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
OBJ  = $(SRC:.cpp=.o)
COMP = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(C_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
