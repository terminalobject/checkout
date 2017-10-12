#include <iostream>
#include <gtest/gtest.h>
#include "/Users/noesis/Projects/checkout/src/checkout.h"

using namespace std;

TEST(CheckoutTests, CanInstantiateCheckout) {
    Checkout co;
}

TEST(CheckoutTests, CanAddItemPrice) {
    Checkout co;
    co.addItemPrice("a", 1);
}
