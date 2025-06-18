//WAP that prints the brewing instrcutions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

#include <iostream>

using namespace std;

int main()
{
    int teaCups, i;
    cout << "Enter the number of tea cups you want to prepare : " << endl;
    cin >> teaCups;

    for (i=1 ; i<= teaCups ; i++){
        cout << "Brewing cup " << i << " of tea" << endl;
    }
    return 0;
}