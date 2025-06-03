#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userPenguin;
    string penguinName;

    cout << "Which type of penguin do you like to play with?" << endl;
    getline(cin, userPenguin);

    cout << "What name would you like to give to your " << userPenguin << "penguin?" <<endl;

    cin >> penguinName;

    cout << "Your chosen penguin - " << userPenguin << endl;
    cout << "Name of your penguin - " << penguinName << endl;

    return 0;
}