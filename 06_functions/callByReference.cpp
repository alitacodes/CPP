#include <iostream>

using namespace std;

int library(int &book){
    book = book + 2;
    cout << "Number of books in library " << book << endl;
}

int main()
{
    // int bookCount = 7;
    // library(bookCount);
    int book = 7;
    library(book);
    // the output will be the same , variable name doesn't matter 
    cout << "Books = " << book;
    return 0;
}