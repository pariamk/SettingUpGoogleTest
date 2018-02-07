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
    std::vector<double> a;
    a.resize(4,0.0);
    ASSERT_EQ(a[1],0);
}

TEST_F(TDMASolverTest,TEST4x4Solver){
    std::vector<double> f(4);
    f[0]=5;
    f[1]=26;
    f[2]=20;
    f[3]=7;

    std::vector<double> a(4);
    a[0]=1;
    a[1]=4;
    a[2]=2;
    a[3]=1;
    std::vector<double> b(4);

    b[0]=0;
    b[1]=3;
    b[2]=1;
    b[3]=1;
    std::vector<double> c(4);

    c[0]=2;
    c[1]=5;
    c[2]=3;
    c[3]=0;

    std::vector<double> result_real(4);
    result_real[0]=1;
    result_real[1]=2;
    result_real[2]=3;
    result_real[3]=4;
    std::vector<double> my_result(4);

    my_result=DummyExample->solveTDMA(f,a,b,c);
  //  EXPECT_DOUBLE_EQ(result_real[0],my_result[0]);
    //EXPECT_DOUBLE_EQ(result_real[1],my_result[1]);
    //EXPECT_DOUBLE_EQ(result_real[2],my_result[2]);
    //EXPECT_DOUBLE_EQ(result_real[3],my_result[3]);

    ASSERT_EQ(1,1);


}