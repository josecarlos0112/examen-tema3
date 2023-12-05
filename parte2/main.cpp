#include <iostream>
#include "environment.h"

int main() {
    Environment env;

    // Insert some symbols
    env.insert("health", Variant(100));
    env.insert("name", Variant(std::string("Player1")));
    env.insert("speed", Variant(1.5f));

    // Lookup and print some symbols
    std::cout << "Health: " << env.lookup("health").get<int>() << std::endl;
    std::cout << "Name: " << env.lookup("name").get<std::string>() << std::endl;
    std::cout << "Speed: " << env.lookup("speed").get<float>() << std::endl;

    return 0;
}