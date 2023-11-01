CXX=g++
CFLAGS=-I ../Builder -Wall
TARGET=main
OBJS=  Meal.o ../Builder/Plate.o Chef.o GrillChef.o VegetableChef.o PastaChef.o RotisseurChef.o FryCook.o StarterMeal.o BeefKebab.o GreenSalad.o Ramen.o ChickenSalad.o Wings.o MainMeal.o BeefBurger.o StirFry.o Alfredo.o ChickenBurger.o FriedMeal.o main.o

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@
    
clean:
	del /q $(TARGET) *.o ..\Builder\*.o

run:
	./main
    