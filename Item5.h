#ifndef ITEM5_H
#define ITEM5_H
#include <iostream>
#include <vector>

using namespace std;

class Item5
{
 private:
    const int x = 10;
    double price;
    vector <string> item5{x};
public:
    Item5(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM5_H
