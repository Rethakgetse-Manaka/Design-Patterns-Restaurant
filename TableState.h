#ifndef TABLESTATE_H
#define TABLESTATE_H

#include <string>

class Table;

/**
 * @brief The TableState class is an abstract class that defines the interface for all table states.
 * 
 */
class TableState {
public:
    /**
     * @brief occupy is a pure virtual function that will be implemented by the derived classes.
     * 
     * @param table A pointer to the table that will be occupied.
     */
    virtual void occupy(Table* table) = 0;

    /**
     * @brief free is a pure virtual function that will be implemented by the derived classes.
     * 
     * @param table A pointer to the table that will be freed.
     */
    virtual void free(Table* table) = 0;

    /**
     * @brief combine is a pure virtual function that will be implemented by the derived classes.
     * 
     * @param table A pointer to the table that will be combined with another table.
     */
    virtual void combine(Table* table) = 0;

    /**
     * @brief split is a pure virtual function that will be implemented by the derived classes.
     * 
     * @param table A pointer to the table that will be split into two tables.
     */
    virtual void split(Table* table) = 0;

    /**
     * @brief getTableStatus is a pure virtual function that will be implemented by the derived classes.
     * 
     * @return std::string The status of the table.
     */
    virtual std::string getTableStatus() = 0;

    /**
     * @brief Destroy the Table State object
     * 
     */
    virtual ~TableState() {}
};


//the actual implementations
/**
 * @brief The Occupied class represents the state of a table when it is occupied.
 * 
 */
class Occupied : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

/**
 * @brief The Combined class represents the state of a table when it is occupied by a group of customers who have combined it with another table.
 */
class Combined : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

/**
 * @brief The Split class is a concrete implementation of the TableState interface.
 * 
 * This state represents a table that has been split into two separate tables.
 * It provides functionality to occupy, free, combine, and split tables, as well as
 * get the status of the table.
 */
class Split : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

/**
 * @brief The Free class represents the state of a table when it is unoccupied.
 * 
 */
class Free : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

#endif
