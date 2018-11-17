#include "Item9.h"
#include <iostream>
#include <vector>

Item9::Item9(double p1)
{
     price = p1;
}

double Item9::getPrice(){
    return price;
}

bool Item9 ::CheckMoney(double price)
{
    if(price != 0.5 && price != 1 && price != 5 && price != 10 && price != 20)
    {
        cout << "Invalid coin or bill!!!" << endl;
        return false;
    }else{return true;}
}

void Item9:: give(double price1){
       double change=0.0;
        int counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
        if (price1 >= price && CheckMoney(price1)==true){
            cout << "Here is your Pepsi can" <<endl;
            change = price1-price;
            while(change >= 20)
            {
                change-=20;
                counter1++;
            }
            while(change >= 10)
            {
                change-=10;
                counter2++;
            }
            while(change >= 5)
            {
                change-=5;
                counter3++;
            }
            while(change >= 1)
            {
                change-=1;
                counter4++;
            }
            while(change >= 0.5)
            {
                change-=0.5;
                counter5++;
            }
            cout << "And here is your change:" << counter1 << "(20) bills ," << counter2 << "(10) bills, "
            << counter3 << "(5) bills, " << counter4 << "(1) coins & " << counter5 << "(0.5) coins" << endl;

        }
        else{
            cout << "We are sorry, your money isn't enough to buy this item " <<endl;
            cout << "If you want to choose another item please press 100 "<<endl;

        }
}
