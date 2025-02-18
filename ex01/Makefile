CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I. -std=c++11
PATH_SRC = ./
HEADERS = Animal.hpp\
	Dog.hpp\
	Cat.hpp\
	Brain.hpp
SRCS = main.cpp\
	Animal.cpp\
	Dog.cpp\
	Cat.cpp\
	Brain.cpp
OBJS = $(SRCS:.cpp=.o)
EXECS = Zoo

all: $(EXECS)

$(EXECS): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: $(PATH_SRC)%.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS) $(EXECS)
re: fclean all

.PHONY: all clean fclean re