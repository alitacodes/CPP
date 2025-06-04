#include <iostream>

using namespace std;

int main(){
    float teaPrice;
    cout << "Base price of tea: " << endl;
    cin >> teaPrice;

    int newTeaPrice = teaPrice + (0.1*teaPrice);
    cout << "New Price of tea - " << newTeaPrice << endl;
    return 0;
}