#include "Item.h"
#include <iostream>


Item::Item()
:name(""), price(0), quantity(0)
{

}


Item::Item(string name1, double price1, int quantity1)
:name(name1), price(price1), quantity(quantity1)
{

}


void Item:: Price(double price1)
{
    price = price1;
}   

void Item:: Quantity(int quantity1)
{
    quantity = quantity1;
}

void Item:: Name(string name1)
{
    name = name1;
}

double Item:: ProductName()
{
    return name;
}

double Item:: ProductPrice()
{
    return price;
}

double Item:: ProductQuantity()
{
    return quantity;
}












