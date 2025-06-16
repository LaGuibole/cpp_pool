# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 20:28:22 by guillaumeph       #+#    #+#              #
#    Updated: 2025/06/16 22:09:49 by guillaumeph      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# **************************************************************************** #
#                                 Makefile Portable                            #
# **************************************************************************** #

NAME        := animal
SRC_DIR     := srcs
OBJ_DIR     := build
INC_DIR     := includes

SRCS        := $(SRC_DIR)/main.cpp \
			   $(SRC_DIR)/Animal.cpp \
			   $(SRC_DIR)/Dog.cpp \
			   $(SRC_DIR)/Cat.cpp \
			   $(SRC_DIR)/WrongAnimal.cpp \
			   $(SRC_DIR)/WrongCat.cpp \
			   $(SRC_DIR)/WrongDog.cpp

OBJS        := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# OS DETECTION (MAC / LINUX)
UNAME_S     := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	SYSROOT := -isysroot $(shell xcrun --show-sdk-path)
else
	SYSROOT :=
endif

CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

# ----------------------------------------------------------------------------- #

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
