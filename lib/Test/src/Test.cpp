//
// Created by paria on 02/02/18.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Include/className.h"

using testing::Eq;

namespace {
    class ClassDeclaration :public testing::Test{
    public:
        className obj;
        ClassDeclaration(){
            obj;
        }

    };
}
TEST_F(ClassDeclaration,DummyTest1){
    ASSERT_EQ("","");
}

TEST_F(ClassDeclaration,DummyTest2){
    ASSERT_EQ("","");
}