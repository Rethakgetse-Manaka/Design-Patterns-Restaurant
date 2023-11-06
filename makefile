CXX=g++
CFLAGS=-I -Wall
TARGET=main
OBJS=  Meal.o Plate.o Testing.o

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
    
clean:
	rm -f $(TARGET) $(OBJS)

run:
	./main
    