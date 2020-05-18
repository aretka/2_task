 CC = g++
 CFLAGS = 

main: list_main.o list_header.o
	$(CC) $(CFLAGS) -o main list_main.o list_header.o

test_unit: test_unit.o list_header.o
	$(CC) $(CFLAGS) -o test_unit test_unit.o list_header.o

list_header: list_header.h list_header.cpp
	$(CC) $(CFLAGS) -c list_header.cpp

clean:
	rm *.o *.txt main test_unit
