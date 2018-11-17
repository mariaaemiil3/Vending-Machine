#ifndef ITEM6_H
#define ITEM6_H
#include <iostream>
#include <vector>

using namespace std;

class Item6
{
   private:
    const int x = 10;
    double price;
    vector <string> item6{x};
public:
    Item6(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM6_H
