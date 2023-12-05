#ifndef VARIANT_H
#define VARIANT_H

#include <variant>
#include <string>

class Variant {
private:
    std::variant<int, float, std::string> value;

public:
    Variant(int v) : value(v) {}
    Variant(float v) : value(v) {}
    Variant(std::string v) : value(v) {}

    template <typename T>
    T get() {
        return std::get<T>(value);
    }
};

#endif //VARIANT_H