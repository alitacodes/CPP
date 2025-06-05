// WAP to check if the nursery is open. If the current hour(input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it's closed.

#include<iostream>

using namespace std;

int main(){
    int userTime;
    cout << "Enter your time in hour (0-23): ";
    cin >> userTime;

    if(userTime >= 8 && userTime <= 18){
        cout << "Nursery is Open :)" ;
    }
    else{
        cout << "Nursery is Closed :(";
    }
    return 0;

}