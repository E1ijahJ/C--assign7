#include <iostream>
#include <limits>
#include "TypeInterpret.h"

int main() {
    std::cout << "=== Type Reinterpretation Tool ===\n";
    std::cout << "Choose input type:\n";
    std::cout << "1. int32_t\n2. uint32_t\n3. float\n4. int64_t\n5. double\n> ";

    int typeChoice;
    std::cin >> typeChoice;

    if (typeChoice == 1) {
        int32_t value;
        std::cout << "Enter int32_t value: ";
        std::cin >> value;

        std::cout << "Reinterpret as:\n1. float\n2. uint32_t\n> ";
        int reinterpretChoice;
        std::cin >> reinterpretChoice;

        if (reinterpretChoice == 1)
            std::cout << "As float: " << int32ToFloat(value) << "\n";
        else if (reinterpretChoice == 2)
            std::cout << "As uint32_t: " << static_cast<uint32_t>(value) << "\n";

    } else if (typeChoice == 2) {
        uint32_t value;
        std::cout << "Enter uint32_t value: ";
        std::cin >> value;

        std::cout << "Reinterpret as:\n1. float\n2. int32_t\n> ";
        int reinterpretChoice;
        std::cin >> reinterpretChoice;

        if (reinterpretChoice == 1)
            std::cout << "As float: " << uint32ToFloat(value) << "\n";
        else if (reinterpretChoice == 2)
            std::cout << "As int32_t: " << static_cast<int32_t>(value) << "\n";

    } else if (typeChoice == 3) {
        float value;
        std::cout << "Enter float value: ";
        std::cin >> value;

        std::cout << "Reinterpret as:\n1. int32_t\n2. uint32_t\n> ";
        int reinterpretChoice;
        std::cin >> reinterpretChoice;

        if (reinterpretChoice == 1)
            std::cout << "As int32_t: " << floatToInt32(value) << "\n";
        else if (reinterpretChoice == 2)
            std::cout << "As uint32_t: " << floatToUint32(value) << "\n";

    } else if (typeChoice == 4) {
        int64_t value;
        std::cout << "Enter int64_t value: ";
        std::cin >> value;

        std::cout << "Reinterpret as:\n1. double\n> ";
        int reinterpretChoice;
        std::cin >> reinterpretChoice;

        if (reinterpretChoice == 1)
            std::cout << "As double: " << int64ToDouble(value) << "\n";

    } else if (typeChoice == 5) {
        double value;
        std::cout << "Enter double value: ";
        std::cin >> value;

        std::cout << "Reinterpret as:\n1. int64_t\n> ";
        int reinterpretChoice;
        std::cin >> reinterpretChoice;

        if (reinterpretChoice == 1)
            std::cout << "As int64_t: " << doubleToInt64(value) << "\n";
    } else {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}