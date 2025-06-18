// WAP that lets the user select a type of plant from menu. Use a switch statement to display the price based on the selected plant :
// Bamboo - $10
// Rose - $1
// Cactus - $2

#include <iostream>

using namespace std;

int main(){
    int ch, price;

    cout << "--Menu--\n 1. Bamboo\n 2. Rose\n 3. Cactus\n";
    cout << "Enter your choice: ";
    cin >> ch;

    switch(ch){
        case 1: 
            price = 10;
            cout << "Price of bamboo plant is $" << price;
            break;
        case 2: 
            price = 1;
            cout << "Price of rose plant is $" << price ;
            break;
        case 3: 
            price = 2;
            cout << "Price of cactus plant is $" << price ;
            break;
        default: cout << "Invalid choice! Try again.";
            break;
    }

    return 0;
}