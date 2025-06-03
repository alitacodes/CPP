#include<iostream>
using namespace std;
int main()
{
    unsigned tree = 20;     //output - 20

    unsigned amount = -20;       //output - 4294967276 -> garbage value because unsigned does not take negative values

    cout << tree << endl; 
    cout << amount << endl;
    
    long largeTreePlanting = 1200000347;
    cout << largeTreePlanting << endl;
    return 0;
}