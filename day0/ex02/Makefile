NAME		= 	account
CC			= 	clang++
RM			=	rm -f

SRC			= 	tests.cpp\
				Account.cpp
OBJ			= 	$(SRC:%.cpp=%.o)
FLAGS		=	-Wall -Wextra -Werror
LIBS		=	-o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBS) $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $(LIBS) $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all