# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babels <babels@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 14:52:46 by aabel             #+#    #+#              #
#    Updated: 2023/11/28 10:57:01 by babels           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SOURCES = Phonebook.classe.cpp main.cpp Contact.classe.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

%.o: %.c++
	$(CC) -c $(CFLAGS) -g3 $< -o $@ -I

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -g3 -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all