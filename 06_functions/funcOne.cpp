#include <iostream>

using namespace std;

int storage(int space){     // space - parameter
    return space;
}

void isCold();

int main(){
    int result = storage(100);   //function calling with arguments
    cout << result;

    isCold("tea");  
    //if argument is given then **
    //if argument value is empty then *
    return 0;
}

void isCold(string thing = "ice"){      // here thing - default parameter
    cout << thing << "is cold" << endl;     
    // ** argument overtakes parameter value, and the argument is printed
    // * the paramter value is shown in the output
}