CC = c++

CC_FLAGS = -Wall -Werror -Wextra -std=c++98

NAME := Phonebook

SRCS := contact.cpp \
		main.cpp \
		phonebook.cpp \

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):		$(addprefix objs/, $(OBJS)) Makefile
				$(CC) $(CC_FLAGS) -o $(NAME) $(addprefix objs/, $(OBJS))
objs/%.o:		%.cpp Makefile includes/Contact.hpp includes/PhoneBook.hpp
				@mkdir -p objs
					$(CC) $(CC_FLAGS) -c $< -o "$@"
		
clean :
		rm -rf objs

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : re clean fclean all .PHONY
