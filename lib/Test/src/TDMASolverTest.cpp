//
// Created by paria on 05/02/18.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Include/TDMASolver.h"
#include <vector>

using testing::Eq;

namespace {
    struct TDMASolverTest :public testing::Test{
    public:
        TDMASolver* DummyExample;
        TDMASolverTest(){
            DummyExample=new TDMASolver;
        }

        ~TDMASolverTest(){}

    };
}

TEST_F(TDMASolverTest,TEST0){
    ASSERT_EQ(1,1);
}