CC			:=	c++
CFLAGS		:=	-std=c++98 -Wall -Wextra -Werror

NAME		:=	zombie

#INCLUDES	:=	Zombie.h
SRCS		:=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

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
