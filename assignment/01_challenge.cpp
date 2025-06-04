#include <iostream>

using namespace std;

int main(){
    string teaType;
    float teaPrice;
    char teaRating;

    cout << "Which type of tea would like to order? \n" << endl;
    getline(cin, teaType);

    cout << "Price of the tea: " << endl;
    cin >> teaPrice;

    cout << "Rate your tea (\"A\", \"B\" ,\"C\", \"D\") : " << endl;
    cin >> teaRating;

    cout << "Your chosen tea type - " << teaType << endl;
    cout << "Price of tea - " << teaPrice << endl;
    cout << "Rating - " << teaRating << endl;
    
    return 0;

}