NAME		= 	replace
CC			= 	clang++
RM			=	rm -f

SRC			= 	main.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
REP			=	*.replace
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $<

clean:
	$(RM) $(OBJ) $(REP)

fclean: clean
	$(RM) $(NAME)

re: fclean all