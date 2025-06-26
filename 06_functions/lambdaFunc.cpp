#include <iostream>

using namespace std;

int main(){
    auto issue = [](int books){
        // no name function - used when a function is required once thorughtout the program to reduce mess and space

        cout << "Library has " << books << " books in one shelf" << endl;
    };

    issue(10);

    return 0;
}

// auto datatype - automatically deduce the type of a variable or the return type of a function