//WAP that keeps serving tea until the user says they've had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

#include <iostream>

using namespace std;

int main()
{
    string ch;
    int i;

    while(true){
        cout << "Would you like to have tea (yes/stop)?" << endl;
        cin >> ch;

        if(ch == "stop"){
            break;
        }

        cout << "Your tea is ready!!" << endl;
    }

    cout << "Thank You, Visit Again!";
    return 0;
}