//
// Created by usuario on 5/12/2023.
//
#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <map>
#include <string>

class Environment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    void setVariable(const std::string& name, const Variant& value);
    Variant getVariable(const std::string& name) const;
    // Otras funciones que puedas necesitar para manipular el entorno, como eliminar variables, etc.
};

#endif // ENVIRONMENT_H