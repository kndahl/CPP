# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 18:26:10 by kdahl             #+#    #+#              #
#    Updated: 2021/01/18 18:27:26 by kdahl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

CMPL = clang++

FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CMPL) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re