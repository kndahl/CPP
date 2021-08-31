# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/25 16:41:14 by kdahl             #+#    #+#              #
#    Updated: 2021/01/25 18:43:25 by kdahl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = replace.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:         clean
	rm -f $(NAME)

re:    			fclean $(NAME)

.PHONY:         all clean fclean re%   

