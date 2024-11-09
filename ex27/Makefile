# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elodlim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 16:17:58 by elodlim           #+#    #+#              #
#    Updated: 2024/11/08 01:53:32 by elodlim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ft_display_file
FLAGS = -Wall -Wextra -Werror
SRCS=srcs/*.c

all:
	gcc $(SRCS) $(FLAGS) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
