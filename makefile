CC = g++
CFLAGS = -Wall -g

# List of source files in the current directory
SRCS := $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)
MAIN = program

# Default target
all: $(MAIN)

# Build the executable
$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

# Compile source files into object files in the current directory
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Run the program
run: $(MAIN)
	./$(MAIN)

# Clean the build files
clean:
	$(RM) $(MAIN) $(OBJS)
