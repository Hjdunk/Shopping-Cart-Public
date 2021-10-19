#include <iostream>
#include <string>
using namespace std;



class Item
{
    private:

    string name;
    double price;
    int quantity;

    public:

    Item();

    Item(string name1, double price1, int quantity1);

    void Name(string name1);
    string ProductName();

    void Price(double price1);
    double ProductPrice();

    void Quantity(int quantity1);
    int ProductQuantity();


};