
CC=gcc
CFLAGS=-g -Wall
NAME=tsconvert
OBJ=main.o

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c
