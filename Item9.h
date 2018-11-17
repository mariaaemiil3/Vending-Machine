#ifndef ITEM9_H
#define ITEM9_H
#include <iostream>
#include <vector>

using namespace std;

class Item9
{
    private:
    const int x = 10;
    double price;
    vector <string> item9{x};
public:
    Item9(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM9_H
