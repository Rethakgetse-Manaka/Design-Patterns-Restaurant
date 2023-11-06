CC = g++
CFLAGS = -Wall -g

# Define the build directory
BUILD_DIR = build

SRCS := $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))  # Change the object file paths
MAIN = $(BUILD_DIR)/program  # Change the path of the executable in the build directory

# Make sure the build directory exists
$(shell mkdir -p $(BUILD_DIR))

all: $(MAIN)

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

$(BUILD_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(MAIN)
	./$(MAIN)

clean:
	$(RM) $(BUILD_DIR)/*.o $(BUILD_DIR)/*~ $(MAIN)
