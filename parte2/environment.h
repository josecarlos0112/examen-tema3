#include <map>
#include <string>
#include <exception>
#include "variant.h"

class Environment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    void insert(const std::string& symbol, const Variant& value) {
        if (symbolTable.find(symbol) != symbolTable.end()) {
            throw std::runtime_error("Symbol already exists");
        }
        symbolTable[symbol] = value;
    }

    Variant lookup(const std::string& symbol) {
        if (symbolTable.find(symbol) == symbolTable.end()) {
            throw std::runtime_error("Symbol does not exist");
        }
        return symbolTable[symbol];
    }

    void remove(const std::string& symbol) {
        if (symbolTable.find(symbol) == symbolTable.end()) {
            throw std::runtime_error("Symbol does not exist");
        }
        symbolTable.erase(symbol);
    }

    bool exists(const std::string& symbol) {
        return symbolTable.find(symbol) != symbolTable.end();
    }
};