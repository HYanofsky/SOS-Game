# Definitions for constants
CC=gcc
CFLAGS=-I.

# This will create your final output using .o compiled files
make: main.o set_up.o questions.o conds.o player.o find_sos.o comp.o end.o
	$(CC) $(CFLAGS) -o main main.o set_up.o questions.o conds.o player.o find_sos.o comp.o end.o

set_up.o: set_up.c sos.h
	$(CC) $(CFLAGS) -c set_up.c

questions.o: questions.c sos.h
	$(CC) $(CFLAGS) -c questions.c

conds.o: conds.c sos.h
	$(CC) $(CFLAGS) -c conds.c

player.o: player.c sos.h
	$(CC) $(CFLAGS) -c player.c

find_sos.o: find_sos.c sos.h
	$(CC) $(CFLAGS) -c find_sos.c

comp.o: comp.c sos.h
	$(CC) $(CFLAGS) -c comp.c

end.o: end.c sos.h
	$(CC) $(CFLAGS) -c end.c

# This will compile main.c with its dependency
main.o: main.c sos.h
	$(CC) $(CFLAGS) -c main.c

# This will clean or remove compiled files so you can start fresh
clean:
	rm -f *.o *.exe
