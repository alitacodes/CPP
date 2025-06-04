#include <iostream>

using namespace std;

int main(){
    string favoriteTea;
    int teaCups;

    cout << "Hy !! Tell me your favorite tea ;)" << endl;
    getline(cin, favoriteTea);

    cout << "Now tell me how many cups of your favorite tea you want to have |)" << endl;
    cin >> teaCups;

    cout << "Wanna see your tea Details? \n Look Below ;D" << endl;
    cout << "Hehehe! Here's your favorite tea : " << favoriteTea << endl;
    cout << "What!!! why do you take so much of tea? :O \nSee the number of cups you have taken : " << teaCups << endl;

    return 0;
}