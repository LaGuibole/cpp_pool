# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 14:33:32 by guphilip          #+#    #+#              #
#    Updated: 2025/05/30 14:39:14 by guphilip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC  = main.cpp
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
