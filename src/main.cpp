#include <iostream>
#include <string>
#include <limits>
#include "calculator.h"

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getPositiveInput(const std::string& prompt) {
    double value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin.fail() || value <= 0) {
            std::cout << "Invalid input. Please enter a positive number.\n";
            clearInput();
        } else {
            return value;
        }
    }
}

std::string getMaterial() {
    std::string material;

    while (true) {
        std::cout << "Select material (water / steel / aluminum): ";
        std::cin >> material;

        if (material == "water" || material == "steel" || material == "aluminum") {
            return material;
        } else {
            std::cout << "Invalid material. Try again.\n";
        }
    }
}

int main() {
    std::cout << "=== Engineering Thermal Process Calculator ===\n\n";

    double mass = getPositiveInput("Enter mass (kg): ");
    double initialTemp = getPositiveInput("Enter initial temperature (°C): ");
    double finalTemp = getPositiveInput("Enter final temperature (°C): ");

    std::string material = getMaterial();

    try {
        double specificHeat = Calculator::getSpecificHeat(material);
        double deltaT = finalTemp - initialTemp;

        double heat = Calculator::calculateHeat(mass, specificHeat, deltaT);

        std::cout << "\n=== RESULTS ===\n";
        std::cout << "Material: " << material << "\n";
        std::cout << "Temperature Change: " << deltaT << " °C\n";
        std::cout << "Heat Required: " << heat << " Joules\n";

    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << "\n";
    }

    std::cout << "\nCalculation complete.\n";
    return 0;
}