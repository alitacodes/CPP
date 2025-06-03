#include <iostream>

using namespace std;

int main()
{
    float penguinPrice = 100.99;
    int roundedPenguinPrice = (int) penguinPrice;

    cout << roundedPenguinPrice <<endl;     //100

    int penguinQuan = 3;
    double totalPenguin = penguinPrice * penguinQuan;
    cout << totalPenguin << endl;
    
    return 0;
}