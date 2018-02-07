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
/* dummy test for checking */
TEST_F(TDMASolverTest,TEST0){
    ASSERT_EQ(1,1);
}


TEST_F(TDMASolverTest,TEST1){
    std::vector<double> f;
    f.resize(4,0.0);
    ASSERT_EQ(f[1],0);
}

TEST_F(TDMASolverTest,TEST4x4Solver){

}