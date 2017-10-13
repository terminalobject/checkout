#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include <string>
#include <map>

class Checkout {
public:
    Checkout();
    virtual ~Checkout();

    void addItemPrice(std::string item, int price);
    void addItem(std::string item);
    int calculateTotal();
    void addDiscount(std::string item, int nbrOfItems, int discountPrice);
protected:
    struct Discount{
        int nbrOfItems;
        int discountPrice;
    };
    std::map<std::string, int> prices;
    std::map<std::string, Discount> discounts;
    std::map<std::string, int> items;
    int total;    
};

#endif
