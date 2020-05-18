 CC = g++
 CFLAGS = 

main: deque_main.o deque_header.o
	$(CC) $(CFLAGS) -o main deque_main.o deque_header.o

test_unit: test_unit.o deque_header.o
	$(CC) $(CFLAGS) -o test_unit test_unit.o deque_header.o

deque_header: deque_header.h deque_header.cpp
	$(CC) $(CFLAGS) -c deque_header.cpp

clean:
	rm *.o *.txt main test_unit
