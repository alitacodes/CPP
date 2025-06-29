#include <iostream>

using namespace std;

int main(){
    int bookShelf[3][4] = {
        {50 , 65 , 29 , 72},
        {38 , 40 , 88 , 12}, 
        {100 , 71 , 45 , 90}
    };

    for(int i = 0 ; i < 3 ; i++){
        cout << "I'm at shelf " << i+1 << "\n" ;
        for(int j =0 ; j < 4 ; j++){
            cout << "There are " << bookShelf[i][j] << " books in this bookshelf\n"; 
        }
    }

    return 0;
}