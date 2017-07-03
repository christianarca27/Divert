//
// Created by chrychry27 on 03/07/17.
//

#include "gtest/gtest.h"
#include "../Dice.h"

TEST(Dice, DefaultConstructor) {
    Dice d;
    ASSERT_EQ(6, d.getFaces());
}


TEST(Dice, RollTest) {
    Dice d;
    ASSERT_GT(d.roll(1), 0);
}
