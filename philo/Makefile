# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namorgha <namorgha@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 23:09:41 by namorgha          #+#    #+#              #
#    Updated: 2023/06/16 09:27:13 by namorgha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = cc

FLAGS = -Wall -Werror -Wextra

OBJ = main.c creat_thread.c mutex.c my_usleep.c timing.c info.c error.c death.c utils.c forks.c eating.c

OBJO = main.o creat_thread.o mutex.o my_usleep.o timing.o info.o error.o death.o utils.o forks.o eating.o

all: $(NAME)

$(NAME): $(OBJO) philo.h
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJO)

fclean: clean
	rm -rf philo

re: fclean all
