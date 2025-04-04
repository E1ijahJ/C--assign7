#include "../include/TypeInterpret.h"
#include <cstring>


float int32ToFloat(int32_t input) {
    float result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
int32_t floatToInt32(float input) {
    int32_t result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}