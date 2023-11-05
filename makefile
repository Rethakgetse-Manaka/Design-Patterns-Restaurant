CC = g++
CFLAGS = -Wall -g

# Source files
SRCS := $(wildcard *.cpp)

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
MAIN = valet_service

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

run: $(MAIN)
	./$(MAIN)

clean:
	$(RM) *.o *~ $(MAIN)