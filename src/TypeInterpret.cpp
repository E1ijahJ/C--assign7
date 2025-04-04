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
float uint32ToFloat(uint32_t input) {
    float result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
uint32_t floatToUint32(float input) {
    uint32_t result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}

double int64ToDouble(int64_t input) {
    double result;
    std::memcpy(&result, &input, sizeof(double));
    return result;
}

int64_t doubleToInt64(double input) {
    int64_t result;
    std::memcpy(&result, &input, sizeof(double));
    return result;
}