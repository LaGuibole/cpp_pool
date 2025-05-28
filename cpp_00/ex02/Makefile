# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 13:53:03 by guphilip          #+#    #+#              #
#    Updated: 2025/05/28 13:55:43 by guphilip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRC  = Account.cpp tests.cpp
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
