#include "BaseCocktail.h"
#include "SpecificCocktail.h"
#include <iostream>

int main()
{
    // Create a base cocktail using a pointer
    BaseCocktail* baseCocktail = new BaseCocktail("Lime and lemonade", 4.5);

    SpecificCocktail bartender(baseCocktail, "White Rum");
    //std::cout << "Your drink: " << bartender.getDescription() << std::endl;
    //std::cout << "Cost: $" << bartender.cost() << std::endl;

    std::cout<< bartender.toString() << std::endl;

    //delete baseCocktail;

    return 0;
}
