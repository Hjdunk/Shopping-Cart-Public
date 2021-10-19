#include <iostream>
#include <string> 
#include <vector>
#include "Item.h"

using namespace std;


class Cart
{
    private:
    vector <Item> inventory;
    string customer;
    string date;


    public: 
    Cart();
    Cart(string customer);
    void add(const Item& its_;)
};


// Pause, I may actually not need this at all if I'm finna be honest, pero let's ver this real quick