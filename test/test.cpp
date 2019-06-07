//
// Created by simon on 07.06.19.
//

#include <iostream>
#include "Customer.cpp"
#include "gtest/gtest.h"

namespace {
    class CustomerTest : public ::testing::Test {
    protected:
        // void SetUp() override {}
        // void TearDown() override {}
    };

    TEST(CustomerTest, StatementWorks) {
        Customer customer("Olivier");
        customer.addRental( Rental( Movie("Karate Kid"), 7));
        customer.addRental( Rental( Movie( "Avengers: Endgame", Movie::NEW_RELEASE ), 5));
        customer.addRental( Rental( Movie("Snow White", Movie::CHILDRENS), 3 ));

        std::string statement = customer.statement();

        EXPECT_EQ(statement, "Rental Record for Olivier\n"
                             "\tKarate Kid\t9.5\n"
                             "\tAvengers: Endgame\t15\n"
                             "\tSnow White\t1.5\n"
                             "Amount owed is 26\n"
                             "You earned 4 frequent renter points");
    }

}
