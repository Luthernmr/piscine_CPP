CC = c++

CC_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME := Polymorphisme
	
SRCS := Animal.cpp \
		Brain.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp \

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):		$(addprefix objs/, $(OBJS)) Makefile
			$(CC) $(CC_FLAGS) -o $(NAME) $(addprefix objs/, $(OBJS))
objs/%.o:		%.cpp Makefile Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
				@mkdir -p objs
					$(CC) $(CC_FLAGS) -c $< -o "$@"

clean :
		rm -rf objs

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all .PHONY
