//WAP that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in list.

#include <iostream>

using namespace std;

int main()
{
    string teaType[4] = {"Black tea", "Green tea", "Masala tea", "Lemon tea"};

    for(int i = 0; i<4 ; i++)
    {
        if(teaType[i] == "Green tea"){
            cout << "Skipping " << teaType[i] << endl;
            continue;
        }
        cout << "Brewing " << teaType[i] << "..." << endl;

    }
}