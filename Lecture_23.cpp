#include <iostream>

using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the Id of Your Item No. : " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the Price of Your Item: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemid[i] << " is: " << itemprice[i] << endl;
    }
}

int main()
{
    shop Dukaan;
    Dukaan.initcounter();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.displayPrice();
    return 0;
}