// WAP to check if the user wants to order bamboo plant. If the user types "bamboo", the program should confirm the order

#include<iostream>

using namespace std;

int main(){
    string plant;
    cout << "Enter your plant order: " ;
    cin >> plant;

    if(plant == "bamboo" || plant == "Bamboo"){
        cout << "Order confirmed !!";
    }

    return 0;
}