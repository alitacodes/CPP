// passing array as parameter in user-defined function

#include <iostream>

using namespace std;

int totalBookIssued(int book[] , int size){
    int total = 0;
    for(int i = 0 ; i < size ; i++){
        total += book[i];
    }
    return total;
}

int main(){
    int book[5] = {39 , 20 , 45 , 88 , 10};
    int result = totalBookIssued(book, 5);
    cout << "Total number of books issued : " << result << endl; 

    return 0;
}