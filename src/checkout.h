#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include <string>

class Checkout {
public:
    Checkout();
    virtual ~Checkout();

    void addItemPrice(std::string item, int price);
};

#endif
