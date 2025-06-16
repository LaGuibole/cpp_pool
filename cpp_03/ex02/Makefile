# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 15:00:00 by guphilip          #+#    #+#              #
#    Updated: 2025/06/16 13:10:54 by guphilip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                 Makefile Portable                            #
# **************************************************************************** #

NAME        := fragtrap
SRC_DIR     := srcs
OBJ_DIR     := build
INC_DIR     := includes

SRCS        := $(SRC_DIR)/main.cpp \
               $(SRC_DIR)/ClapTrap.cpp \
			   $(SRC_DIR)/ScavTrap.cpp \
			   $(SRC_DIR)/FragTrap.cpp

OBJS        := $(OBJ_DIR)/main.o \
               $(OBJ_DIR)/ClapTrap.o \
			   $(OBJ_DIR)/ScavTrap.o \
			   $(OBJ_DIR)/FragTrap.o

# OS DETECTION (MAC / LINUX)
UNAME_S     := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
	SYSROOT := -isysroot $(shell xcrun --show-sdk-path)
else
	SYSROOT :=
endif

CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR) $(SYSROOT)

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
