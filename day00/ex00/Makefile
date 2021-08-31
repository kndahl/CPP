# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdahl <kdahl@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 17:25:25 by kdahl             #+#    #+#              #
#    Updated: 2021/01/18 17:37:07 by kdahl            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CMPL = clang++

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CMPL) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re