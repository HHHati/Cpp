# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 09:30:08 by bade-lee          #+#    #+#              #
#    Updated: 2023/01/06 12:48:57 by bade-lee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

INC_DIR = .

SRC = phonebook.cpp\
	  contact.cpp\
	  main.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	@$(CC) $(CPP_FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, bonus, re