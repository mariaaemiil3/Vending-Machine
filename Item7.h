#ifndef ITEM7_H
#define ITEM7_H
#include <iostream>
#include <vector>

using namespace std;

class Item7
{
   private:
    const int x = 10;
    double price;
    vector <string> item7{x};
public:
    Item7(double p1);
    void give(double price1);
    double getPrice();
    bool CheckMoney(double price);
};

#endif // ITEM7_H
