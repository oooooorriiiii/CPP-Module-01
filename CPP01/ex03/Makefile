CXX		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra -std=c++98

NAME	:=	ex03_out

SRCS	:=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

OBJS	:=	$(SRCS:.cpp=.o)

.PHONY: all clean fclean re

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all