#ifndef TABLESTATE_H
#define TABLESTATE_H

#include <string>

class Table;

/**
 * @brief The TableState class is an abstract base class that defines the interface for all table states.
 * 
 */
class TableState {
public:
    /**
     * @brief This method is called when a table is occupied.
     * 
     * @param table A pointer to the table that is being occupied.
     */
    virtual void occupy(Table* table) = 0;

    /**
     * @brief This method is called when a table is freed.
     * 
     * @param table A pointer to the table that is being freed.
     */
    virtual void free(Table* table) = 0;

    /**
     * @brief This method is called when two tables are combined.
     * 
     * @param table A pointer to the table that is being combined with another table.
     */
    virtual void combine(Table* table) = 0;

    /**
     * @brief This method is called when a table is split into two tables.
     * 
     * @param table A pointer to the table that is being split.
     */
    virtual void split(Table* table) = 0;

    /**
     * @brief This method returns the status of the table.
     * 
     * @return std::string The status of the table.
     */
    virtual std::string getTableStatus() = 0;

    /**
     * @brief This is the virtual destructor for the TableState class.
     * 
     */
    virtual ~TableState() {}
};


//teh actual implementations
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
 * @brief The Combined class represents the state of a table when it is occupied by a group of customers who have combined tables.
 * 
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
 * It allows for the table to be occupied, freed, combined with another table, or split into two tables again.
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
 * @brief The Free class represents the state of a table when it is unoccupied and available for customers to use.
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
