#ifndef TABLESTATE_H
#define TABLESTATE_H

class Table;

class TableState {
public:
    virtual void occupy(Table* table) = 0;
    virtual void free(Table* table) = 0;
    virtual void combine(Table* table) = 0;
    virtual void split(Table* table) = 0;
    virtual std::string getTableStatus() = 0;
    virtual ~TableState() {}
};


//teh actual implementations
class Occupied : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

class Combined : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

class Split : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

class Free : public TableState {
public:
    void occupy(Table* table) override;
    void free(Table* table) override;
    void combine(Table* table) override;
    void split(Table* table) override;
    std::string getTableStatus() override;
};

#endif