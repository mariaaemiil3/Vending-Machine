#ifndef ITEM8_H
#define ITEM8_H
#include <iostream>
#include <vector>

using namespace std;

class Item8
{
   private:
    const int x = 10;
    double price;
    vector <string> item8{x};
public:
    Item8(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM8_H
