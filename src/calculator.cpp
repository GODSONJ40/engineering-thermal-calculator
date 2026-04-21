#include "calculator.h"
#include <stdexcept>

// Return specific heat capacity (J/kg°C)
double Calculator::getSpecificHeat(const std::string& material) {
    if (material == "water") return 4186;
    if (material == "steel") return 490;
    if (material == "aluminum") return 897;

    throw std::invalid_argument("Unknown material");
}

// Q = m * c * ΔT
double Calculator::calculateHeat(double mass, double c, double deltaT) {
    return mass * c * deltaT;
}