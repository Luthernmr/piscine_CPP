CC = c++

CC_FLAGS = -Wall -Werror -Wextra

NAME := test

SRCS := main.cpp \

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):		$(addprefix objs/, $(OBJS)) Makefile
				$(CC) $(CC_FLAGS) -o $(NAME) $(addprefix objs/, $(OBJS))
objs/%.o:		%.cpp Makefile
				@mkdir -p objs
					$(CC) $(CC_FLAGS) -c $< -o "$@"
		
clean :
		rm -rf objs

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all .PHONY
