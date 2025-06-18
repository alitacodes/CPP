// WAP that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.

#include <iostream>

using namespace std;

int main()
{
    string teaType[5] = {"Oolong tea", "Black tea", "Green tea", "Masala tea", "Lemon tea"};

    for(int i=0 ; i<4 ; i++){
        cout << "Brewing 3 cups of " << teaType[i] << "..." << endl;
        for(int j=0 ; j<3; j++){
            cout << "Brewing " << j << " cups of "<< teaType[i] << endl;
        }
        cout << "\n" << endl;
    }

    return 0;
}