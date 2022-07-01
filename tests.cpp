#include <gtest/gtest.h>
#include "container.h"
#include <map>

void run_tests(){
    RUN_ALL_TESTS();
}

TEST(container,containerTest){
    container<int> myMap;
    std::map<std::string,int> systemMap;

    systemMap["five"] = 5;
    myMap["five"] = 5;

    systemMap["one"] = 1;
    myMap["one"] = 1;

    systemMap["ten"] = 10;
    myMap["ten"] = 10;

    systemMap["seven"] = 7;
    myMap["seven"] = 7;

    systemMap["nine"] = 9;
    myMap["nine"] = 9;

    EXPECT_EQ(systemMap["five"],myMap["five"]);
    EXPECT_EQ(systemMap["one"],myMap["one"]);
    EXPECT_EQ(systemMap["ten"],myMap["ten"]);
    EXPECT_EQ(systemMap["seven"],myMap["seven"]);
    EXPECT_EQ(systemMap["nine"],myMap["nine"]);


}


