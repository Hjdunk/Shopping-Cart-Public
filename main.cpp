#include <iostream>
#include <vector>
#include "Item.h"
#include "cart.h"

using namespace std;




int main()
{
char choice;
int PurchasePower;


float org = .75;
float appl = .25;
float pear = 1.00;
float bana = .85;
float grape = 6.00;
float oatmlk = 5.00;
float almmlk = 6.00;
float cashmlk= 5.00;
float soymlk = 4.00;
float cocomlk = 3.00;
float twopermlk = 3.00;
float vitdmlk = 4.00;
float fatmlk = 4.00;
float goatmlk = 6.00;
float rasinbran = 4.00;
float granola = 5.00;
float honeybunches = 6.00;
float twix = 4.00;
float honey = 5.00;
float yogurt = 1.50;
float cashyog = 2.00;
float eggs = 1.80;
float vegeggs = 3.00;
float cheese = 2.00;
float alcheese = 3.00;

int itemop;
int itemno;
int productcounter = 0;
int productsum = 0;



cout << "Welcome to Shopping Center!" << endl;
cout << endl;

cout << "how much are you going to purchase today?" << endl;

cout << endl;

cin >> PurchasePower;

Cart cart1;

for (int i = 0; i < PurchasePower; i++)
{
    cout << "Menu:" << endl;
    cout << endl;
    cout << "A. Fruits" << endl;
    cout << "B. Non Dairy" << endl;
    cout << "C. Dairy" << endl;
    cout << "D. Cereal" << endl;
    cout << "E. Other" << endl;
    cout << "Please select your type of items to add to the cart!" << endl;
    cin << choice;
    cout << endl; 

    switch(choice)
    {
        case 'A':
        case 'a':
            cout << "1. Oranges -$" << org << endl;
            cout << "2. Apples" << appl << endl;
            cout << "3. Pears" << pear << endl;
            cout << "4. Bananas" << bana << endl;
            cout << "5. Grapes" << grape << endl;
            cout << endl;

            cout << "choose an option" << endl;
            cin>> itemop;

            cout << "How many" << endl;
            cin >> itemno;
            if(itemno > PurchasePower)
            {
                cout << "Error, can't add more than what you've bought. Restart" << endl;
                break;
            }
            else
            {
                if (itemop == 1)
                {
                    Item a ("Oranges" , org, itemno);
                    productcounter++;
                    cart1.add(a);
                    if (productcounter > PurchasePower)
                    {
                        cout << "error. you're buying more than you planned!" << endl;
                    }
                }
            }
            
            
    }

}




}