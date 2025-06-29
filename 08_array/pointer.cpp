#include <iostream>

using namespace std;

int *ptr (int books){
    int *order = new int[books];        // new - keyword for dynamic memory
    for(int  i = 0 ; i < books ; i++){
        order[i] = (i + 1) * 20; 
    }
    return order;
}

int main(){
    int books = 3;
    int *booksOrder = ptr(books);

    for(int i = 0 ; i < books ; i++){
        cout << "Number of Book " << i + 1 << " ordered : " << booksOrder[i] << endl; 
    }

    delete[] booksOrder;    

    return 0;
}