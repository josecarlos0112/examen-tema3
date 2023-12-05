//
// Created by usuario on 5/12/2023.
//
#include "environment.h"
#include <iostream>

void Environment::setVariable(const std::string& name, const Variant& value) {
    symbolTable[name] = value;
}

Variant Environment::getVariable(const std::string& name) const {
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
        return it->second;
    } else {
        std::cerr << "Error: Variable '" << name << "' no encontrada en el entorno.\n";
        return Variant();
    }
}