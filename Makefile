CC = g++
CFLAGS = -Wall -g

SRCS := $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
MAIN = program

# Specify the name of the output directory
BUILD_DIR = build

# The final target executable name
TARGET = $(BUILD_DIR)/$(MAIN)

# Build the project and create an executable
all: $(BUILD_DIR) $(TARGET)

$(TARGET): $(OBJS) 
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# The existing compile rule
.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) *.o *~ $(BUILD_DIR)/$(MAIN)

# Add a target for cleaning only the build artifacts
clean-build:
	$(RM) -r $(BUILD_DIR)
