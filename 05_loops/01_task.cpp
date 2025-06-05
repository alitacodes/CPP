// WAP that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cup remaining. the loop should run until all the cups are served. 

#include <iostream>

using namespace std;

int main(){
    int cupCount;

    cout << "Enter the number of tea cups to serve :" << endl;
    cin >> cupCount;

    while(cupCount > 0){
        cupCount--;         //remaining tea cups are shown after serving the cup
        cout << "Serving a cup of tea\n" << cupCount << " tea cups remaining" << endl;
        //cupCount--;       //remaining tea cups are shown after serving the cup
    }
    cout << "All tea cups are served. " << endl;
    return 0;
}