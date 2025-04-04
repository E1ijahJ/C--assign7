#include "../include/TypeInterpret.h"
#include <cstring>


float int32ToFloat(int32_t input) {
    float result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}