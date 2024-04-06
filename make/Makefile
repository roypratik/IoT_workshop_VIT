# Define compiler
CC=gcc

# Define any compile-time flags
CFLAGS=-Wall

# Define the target executable
TARGET=program

all: $(TARGET)

$(TARGET): main_make.o utils_1.o utils_2.o
	$(CC) main_make.o utils_1.o utils_2.o -o $(TARGET)

main_make.o: main_make.c utils_1.h utils_2.h
	$(CC) $(CFLAGS) -c main_make.c

utils_1.o: utils_1.c utils_1.h
	$(CC) $(CFLAGS) -c utils_1.c

utils_2.o: utils_2.c utils_2.h
	$(CC) $(CFLAGS) -c utils_2.c

clean:
	rm -f *.o $(TARGET)
