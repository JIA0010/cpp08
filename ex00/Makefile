NAME     = a.out
SRCS     = main.cpp
OBJS     = $(SRCS:.cpp=.o)
CXX      = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind:
	valgrind --leak-check=full ./$(NAME)

test: 
	@ make -C test

.PHONY: all clean fclean re