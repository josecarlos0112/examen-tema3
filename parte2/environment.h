//
// Created by usuario on 5/12/2023.
//
#ifndef PARTE2_ENVIRONMENT_H
#define PARTE2_ENVIRONMENT_H

#include <map>
#include <string>
#include "variant.h"

class Environment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    void setVariable(const std::string& name, const Variant& value);
    Variant getVariable(const std::string& name) const;
    // Otras funciones que puedas necesitar para manipular el entorno, como eliminar variables, etc.
};

#endif // PARTE2_ENVIRONMENT_H