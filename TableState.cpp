#include "TableState.h"
#include "Table.h"
#include <iostream>

// Occupied state
void Occupied::occupy(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is already occupied." << std::endl;
}

void Occupied::free(Table* table) {
    table->setState(new Free());
    std::cout << "Table " << table->getTableNumber() << " is now free." << std::endl;
}

void Occupied::combine(Table* table) {
    table->setState(new Combined());
    std::cout << "Table " << table->getTableNumber() << " is now combined." << std::endl;
}


void Occupied::split(Table* table) {
      table->setState(new Split());
    std::cout << "Table " << table->getTableNumber() << " is now split" << std::endl;
}

std::string Occupied::getTableStatus() {
    return "Occupied";
}

// Combined state
void Combined::occupy(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is already occupied." << std::endl;
}

void Combined::free(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is now free." << std::endl;
}

void Combined::combine(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is already combined and cannot be combined again." << std::endl;
}

void Combined::split(Table* table) {
    table->setState(new Split());
    std::cout << "Table " << table->getTableNumber() << " is now split." << std::endl;
}

std::string Combined::getTableStatus() {
    return "Combined";
}

// Split state
void Split::occupy(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is already occupied " << std::endl;
}

void Split::free(Table* table) {
    table->setState(new Free());
    std::cout << "Table " << table->getTableNumber() << " is now free." << std::endl;
}

void Split::combine(Table* table) {
    table->setState(new Combined());
    std::cout << "Table " << table->getTableNumber() << " is now combined." << std::endl;
}

void Split::split(Table* table) {
      table->setState(new Split());
    std::cout << "Table " << table->getTableNumber() << " is already split and cannot be split again." << std::endl;
}

std::string Split::getTableStatus() {
    return "Split";
}

// Free state
void Free::occupy(Table* table) {
    table->setState(new Occupied());
    std::cout << "Table " << table->getTableNumber() << " is now occupied." << std::endl;
}

void Free::free(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is already free." << std::endl;
}

void Free::combine(Table* table) {
    std::cout << "Table " << table->getTableNumber() << " is now combined." << std::endl;
}

void Free::split(Table* table) {
    std::cout << "Table " << table->getTableNumber() << "is split" << std::endl;
}

std::string Free::getTableStatus() {
    return "Free";
}