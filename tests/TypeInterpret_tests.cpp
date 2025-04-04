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