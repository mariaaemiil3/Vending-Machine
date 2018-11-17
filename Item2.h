#ifndef ITEM2_H
#define ITEM2_H


#include <iostream>
#include <vector>

using namespace std;
class Item2
{
private:
    const int x = 10;
    double price;
    vector <string> item1{x};
public:
    Item2(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};
#endif // ITEM2_H
