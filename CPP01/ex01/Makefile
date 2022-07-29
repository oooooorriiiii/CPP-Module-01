CC			:=	c++
CFLAGS		:=	-std=c++98 -Wall -Wextra -Werror

NAME		:=	zombie

SRCS		:=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

OBJS		:=	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

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
