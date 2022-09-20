# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 15:49:09 by lnemor            #+#    #+#              #
#    Updated: 2022/05/16 18:35:54 by lnemor           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = c++

CC_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME := replacer

SRCS := main.cpp \

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):		$(addprefix objs/, $(OBJS)) Makefile
				$(CC) $(CC_FLAGS) -o $(NAME) $(addprefix objs/, $(OBJS))
objs/%.o:		%.cpp Makefile
					@mkdir -p objs
					$(CC) $(CC_FLAGS) -c $< -o $@
		
clean :
		rm -rf objs

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all .PHONY