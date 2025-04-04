#include "../include/TypeInterpret.h"
#include <cstring>

/// @brief changes 32 bit integer into a 32 bit float instead
/// @param input the value
/// @return the resulting float value wut the same the bit pattern
float int32ToFloat(int32_t input) {
    float result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
/// @brief 32 bit float into 32 bit signed int
/// @param input the float to reinterpret
/// @return the value that shares the memory representation
int32_t floatToInt32(float input) {
    int32_t result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
/// @brief binary representation of the 32 bit unsigned ints as a 32 bit float
/// @param input 32 bit unsigned int to change
/// @return the float that shares the same pattern as teh input
float uint32ToFloat(uint32_t input) {
    float result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
/// @brief 32 bit float into a  32 bit unsinged int
/// @param input the float to reinterpret 
/// @return the unsigneed int with the same binary representation 
uint32_t floatToUint32(float input) {
    uint32_t result;
    std::memcpy(&result, &input, sizeof(float));
    return result;
}
/// @brief 64 signed int as a double 
/// @param input the 64 bit signed int to reintepret 
/// @return double with the same pattern
double int64ToDouble(int64_t input) {
    double result;
    std::memcpy(&result, &input, sizeof(double));
    return result;
}
/// @brief 64 bit double into a 64 bit int
/// @param input double to reinterpret
/// @return the same binary rep as the input 
int64_t doubleToInt64(double input) {
    int64_t result;
    std::memcpy(&result, &input, sizeof(double));
    return result;
}