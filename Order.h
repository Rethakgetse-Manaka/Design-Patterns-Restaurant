#ifndef Order_H
#define Order_H
// Include the OrderMemento class
#include "OrderMemento.h" 
#include <string>
#include <vector>
#include "FoodItem.h"
// #include "SpecificCocktail.h"
// #include "BaseCocktail.h"


class Order
{
    //added for memento
    private:
    // int customerID;
    // int tableID;
    // std::string customerName;
    // std::vector<SpecificCocktail*> drinks;
    std::vector<FoodItem*> items;
    bool isModified;
   

    public:
        //  Order(int cID, std::string cName);
        // void addStarter(std::string, double val);
        // void addItem(std::string item, bool g, bool s, double val, bool well);
        // std::vector<FoodItem*> getItems();
        // int getTableID();
        // void setTableID(int id);
        // std::vector<SpecificCocktail*> getDrinks();
        // void addDrink(std::string baseName, bool alch, double cost, std::string mixes);
        // int getCustomerID();
        // double getTotal();
        // std::string getCustomerName();
        // std::string printOrder();
        // ~Order();
         Order();
        void addItem(FoodItem* i);
        void removeItem(FoodItem* i);
        const std::vector<FoodItem*>& getItems() const;
       //added
        OrderMemento* createMemento();
        void modifyOrder();
        void cancelOrder();
        void restoreFromMemento(OrderMemento* memento);
       
};
#endif