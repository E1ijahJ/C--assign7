#include <gtest/gtest.h>
#include "../include/TypeInterpret.h"

TEST(TypeInterpretTest, Int32ToFloatCorrectness) {

    int32_t rawBits = 0x3F9D70A4;

    float result = int32ToFloat(rawBits);

    EXPECT_FLOAT_EQ(result, 1.23f);
}


TEST(TypeInterpretTest, FloatToInt32Correctness) {
    float input = 1.23f;
    int32_t result = floatToInt32(input);

    
    EXPECT_EQ(result, 0x3F9D70A4);
}

TEST(TypeInterpretTest, UInt32ToFloatCorrectness) {
    uint32_t input = 0x3F800000;  // IEEE-754 for float 1.0
    float result = uint32ToFloat(input);

    EXPECT_FLOAT_EQ(result, 1.0f);
}

TEST(TypeInterpretTest, FloatToUInt32Correctness) {
    float input = 1.0f;
    uint32_t result = floatToUint32(input);

    EXPECT_EQ(result, 0x3F800000); // IEEE-754 for float 1.0
}

TEST(TypeInterpretTest, Int64ToDoubleCorrectness) {
    int64_t input = 0x3FF0000000000000; // IEEE-754 bits for double 1.0
    double result = int64ToDouble(input);

    EXPECT_DOUBLE_EQ(result, 1.0);
}