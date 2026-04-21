#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

class Calculator {
public:
    static double getSpecificHeat(const std::string& material);
    static double calculateHeat(double mass, double c, double deltaT);
};

#endif