#ifndef ITEM1_H
#define ITEM1_H
#include <iostream>
#include <vector>

using namespace std;
class Item1
{
private:
    const int x = 10;
    double price;
    vector <string> item1{x};
public:
    Item1(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price1);
};

#endif // ITEM1_H
