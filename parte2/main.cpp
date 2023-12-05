#include <iostream>

#include "environment.h"
#include <iostream>

int main() {
    // Ejemplo de uso de la clase Environment:
    Environment scriptEnvironment;

    scriptEnvironment.setVariable("playerHealth", Variant(100));
    scriptEnvironment.setVariable("playerPosition", Variant(std::make_pair(0.0, 0.0)));

    // Obtener los valores de las variables
    Variant health = scriptEnvironment.getVariable("playerHealth");
    Variant position = scriptEnvironment.getVariable("playerPosition");

    // Imprimir los valores de las variables
    std::cout << "Player Health: " << std::get<int>(health.getValue()) << std::endl;
    auto pos = std::get<std::pair<double, double>>(position.getValue());
    std::cout << "Player Position: (" << pos.first << ", " << pos.second << ")" << std::endl;

    return 0;
}
