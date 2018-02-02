//
// Created by paria on 02/02/18.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "TDMASolver.h"
#include <vector>

using testing::Eq;



namespace {
    struct TDMAtest :public testing::Test{
    public:
        TDMASolver* dummyExample;
        TDMAtest(){
            dummyExample=new TDMASolver;

        }
        ~TDMAtest(){}

    };
}
TEST_F(TDMAtest,NameOfTheTest0){
    ASSERT_EQ(1,1);
    ASSERT_EQ("","");
}

TEST_F(TDMAtest,dummyexample1){
    std::vector<double>f_f;
    std::vector<double> a_f;
    std::vector<double> b_f;
    std::vector<double> c_f;
    f_f.push_back(5);
    f_f.push_back(26);
    f_f.push_back(20);
    f_f.push_back(7);
    a_f.push_back(1);
    a_f.push_back(4);
    a_f.push_back(2);
    a_f.push_back(1);
    b_f.push_back(0);
    b_f.push_back(3);
    b_f.push_back(1);
    b_f.push_back(1);
    c_f.push_back(2);
    c_f.push_back(5);
    c_f.push_back(3);
    c_f.push_back(0);
    std::vector<double> result;
    //result={ 65.9698 , 93.7785, 124.538, 159.48 };
    //result.push_back(1);
  // result.push_back(2);
  //  result.push_back(3);
  //  result.push_back(4);
    EXPECT_EQ(result,dummyExample->solveTDMA(f_f,a_f,b_f,c_f));


}