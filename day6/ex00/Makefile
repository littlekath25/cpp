NAME		= 	convert
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp\
				Scalar.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $< -I inc

clean:
	$(RM) $(OBJ) $(CREATIONS)

fclean: clean
	$(RM) $(NAME)

re: fclean all