#include <iostream>
#include <vector>
#include <cstring>
#include <Item1.h>
#include <Item2.h>
#include <Item3.h>
#include <Item4.h>
#include <Item5.h>
#include <Item6.h>
#include <Item7.h>
#include <Item8.h>
#include <Item9.h>
#include <Item10.h>

using namespace std;

void Displaymenu(int choice);
void CheckMoney(double price);

int main()
{
    int choice;
    double price;
    Displaymenu(choice);
}

void Displaymenu(int choice){
    double price1;
    cout << "To show your display menu please press 100"<<endl;
    cin >> choice;
    while (true){
     if (choice==100){
        cout << "If you want a can of Pepsi please press 1" <<endl;
        cout << "If you want a can of Chips please press 2" <<endl;
        cout << "If you want a can of Coca please press 3" <<endl;
        cout << "If you want a can of Biscuits please press 4" <<endl;
        cout << "If you want a can of corissant please press 5" <<endl;
        cout << "If you want a packet of Gummies please press 6" <<endl;
        cout << "If you want a Marshmallow please press 7" <<endl;
        cout << "If you want a Chocolate bar please press 8" <<endl;
        cout << "If you want a Gum please press 9" <<endl;
        cout << "If you want a Lollipop please press 10" <<endl;
        cout << "If you want to cancel the operation please press 0" <<endl;

        cin >> choice;
     }
     if (choice==0){
        cout << "Here is your money back:" << price1 << "LE" <<endl;
        return;

     }
     if (choice==1){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item1 Pepsi(5.0);
        Pepsi.give(price1);
        if (price1<=Pepsi.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
    if (choice==2){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item2 Chips(3.0);
        Chips.give(price1);
        if (price1<=Chips.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }

    if (choice==3){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item3 Coca(5.0);
        Coca.give(price1);
        if (price1<=Coca.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==4){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item4 Biscuits(2.50);
        Biscuits.give(price1);
        if (price1<=Biscuits.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==5){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item5 Corissant(3.50);
        Corissant.give(price1);
        if (price1<=Corissant.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==6){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item6 Gummies(2.0);
        Gummies.give(price1);
        if (price1<=Gummies.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==7){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item7 Marshmallow(10.0);
        Marshmallow.give(price1);
        if (price1<=Marshmallow.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==8){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item8 Chocolate(5.0);
        Chocolate.give(price1);
        if (price1<=Chocolate.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==9){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item9 Gum(1.50);
        Gum.give(price1);
        if (price1<=Gum.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
     if (choice==10){
        cout << "Please Enter your Money" <<endl;
        cin >> price1;
        Item10 Lollipop(2.0);
        Lollipop.give(price1);
        if (price1<=Lollipop.getPrice()){
        cin >> choice;
        }
        else{
            return;
        }
    }
    }
}
