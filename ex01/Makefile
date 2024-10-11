# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 11:34:52 by erigolon          #+#    #+#              #
#    Updated: 2024/10/11 10:23:32 by erigolon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animals

SRC		= main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp
			

OBJ		= $(SRC:.cpp=.o)

CXX		= c++ -g

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re