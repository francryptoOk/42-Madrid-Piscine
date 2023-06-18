#############################
CC=cc
FLAGS=-Wall -Werror -Wextra
NAME=rush-02
#############################

all: compile

compile: main.o ft_math.o ft_print_data.o utilities.o 
	$(CC) main.o ft_math.o ft_print_data.o utilities.o -o $(NAME)

main.o: main.c
	$(CC) -c $(FLAGS) main.c

ft_math.o: ft_math.c
	$(CC) -c $(FLAGS) ft_math.c

ft_print_data.o: ft_print_data.c
	$(CC) -c $(FLAGS) ft_print_data.c

utilities.o: utilities.c
	$(CC) -c $(FLAGS) utilities.c

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
