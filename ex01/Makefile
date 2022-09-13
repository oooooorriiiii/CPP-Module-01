CXX			:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror

NAME		:=	zombie

SRCS		:=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJS		:=	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY:	all
all: $(NAME)

.PHONY:	clean
clean:
	rm -rf $(OBJS)

.PHONY:	fclean
fclean: clean
	rm -rf $(NAME)

.PHONY:	re
re: fclean all
