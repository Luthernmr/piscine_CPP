# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 17:55:36 by lnemor            #+#    #+#              #
#    Updated: 2022/09/26 17:48:49 by lnemor           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = c++

CC_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME := Interpret_cast
	
SRCS := $(shell find . -type f -name "*.cpp")

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):		$(addprefix objs/, $(OBJS)) Makefile
			$(CC) $(CC_FLAGS) -o $(NAME) $(addprefix objs/, $(OBJS))
objs/%.o:		%.cpp Makefile $(shell find . -type f -name "*.hpp")
				@mkdir -p objs
					$(CC) $(CC_FLAGS) -c $< -o "$@"

clean :
		rm -rf objs

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all .PHONY
