CFLAGS= -Wall -g
OBJS = delete.o phoneBookMain.o print.o register.o search.o
all : phoneBookMain
%.o: %.c
	gcc -c -o $@ $(CFLAGS) $<
phoneBookMain: $(OBJS)
	gcc -o phoneBookMain $(OBJS)
