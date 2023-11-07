CC = g++
CFLAGS = -Wall -g

# Define the build directory
BUILD_DIR = build

SRCS := $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
MAIN = $(BUILD_DIR)/program  # Change the path of the executable in the build directory

# Make sure the build directory exists
$(shell mkdir -p $(BUILD_DIR))

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)
	cp $(MAIN) .  # Copy the executable to the main directory

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(MAIN)
	./$(MAIN)

leak:
	valgrind --leak-check=full ./program

clean:
	$(RM) *.o *~ program
