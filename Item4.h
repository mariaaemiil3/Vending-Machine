#ifndef ITEM4_H
#define ITEM4_H
#include <iostream>
#include <vector>

using namespace std;

class Item4
{
private:
    const int x = 10;
    double price;
    vector <string> item4{x};
public:
    Item4(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM4_H
