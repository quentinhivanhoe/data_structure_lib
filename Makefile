CC	=	gcc

MAIN	=	main.c

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	-I src/

C_FLAGS	= -Werror -Wall -Wextra

all:	$(OBJ)
	$(CC) -g3 $(MAIN) $(OBJ) $(INCLUDE) $(C_FLAGS)

debug:
	$(CC) -g3 $(MAIN) $(SRC) $(INCLUDE) $(C_FLAGS)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean all