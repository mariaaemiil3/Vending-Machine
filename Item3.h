#ifndef ITEM3_H
#define ITEM3_H
#include <iostream>
#include <vector>

using namespace std;
class Item3
{
private:
    const int x = 10;
    double price;
    vector <string> item3{x};
public:
    Item3(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM1_H
