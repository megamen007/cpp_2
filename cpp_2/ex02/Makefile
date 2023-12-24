# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 23:19:31 by mboudrio          #+#    #+#              #
#    Updated: 2023/12/24 23:19:34 by mboudrio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Define the compiler
CC = c++

# Define the flags to pass to the compiler
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=

# Define the source files for the executable
SRC = main.cpp Fixed.cpp 
# Define the object files for the executable, generated from the source files
OBJ = $(SRC:.cpp=.o)

# Define the name of the executable to be generated
NAME = cpp_2_ex00

# Define the default target to be built
all: $(NAME)

# Rule to generate the executable from the object files
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ)  -o $(NAME)

# Clean target to remove generated files
clean:
	rm -f $(OBJ) 

# Fclean target to remove executable files and perform clean
fclean: clean
	rm -f $(NAME)

# Re target to rebuild the project from scratch
re: fclean all