#include <iostream>

using namespace std;

int main(){
    int bookIssued[5] = {100 , 30 , 26 , 78 , 59};
    for(int i = 0; i<5; i++){
        cout << "Number of book " << i << " issued: " << bookIssued[i] << "\n" << endl;
    } 

    return 0;
}