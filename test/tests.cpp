// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(test_on) {
    Automata automat;
    automat.on();
    EXPECT_EQ(WAIT, automat.getState());
}
