#ifndef ITEM_H
#define ITEM_H
#include <string>

class FoodItem
{
    private:
        double price;
         std::string name;
         std::string mealName;
//     std::string type;
//     bool garnish;
//     bool sauce;
//     bool welldone;
    public:
        FoodItem(double p,std::string n);
       
        //std::string getItemName();
        //double getPrice();
        
        //added consts for Memento Pattern: Main
        std::string getItemName() const;  
        double getPrice() const;       
//     FoodItem();
//     FoodItem(std::string n, double val);
//     FoodItem(std::string n, bool gar, bool sauce, double val, bool well);
//     double getPrice();
//     std::string getName();
//     std::string getType();
//     std::string toString();
//     ~FoodItem();

};
#endif