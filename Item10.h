#ifndef ITEM10_H
#define ITEM10_H
#include <iostream>
#include <vector>

using namespace std;

class Item10
{
   private:
    const int x = 10;
    double price;
    vector <string> item10{x};
public:
    Item10(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM10_H
