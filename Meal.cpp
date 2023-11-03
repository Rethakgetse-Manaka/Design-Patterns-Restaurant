#include "Meal.h"

/**
 * @brief Equality comparison operator for Meal objects.
 *
 * This operator compares two Meal objects for equality based on their 'name' member.
 *
 * @param other The Meal object to compare with.
 * @return true if the 'name' of both Meal objects is equal, false otherwise.
 */
Meal::~Meal()
{
}
bool Meal::operator==(Meal &other)
{
    return (this->name == other.name);
}
