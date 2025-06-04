// Challenge : WAP that allows a user to input the number of book covers they have. Assign additional bags to them based on certain conditions(e.g. is they have fewer than 10 book covers, give them five extra). Update the original number using assignment operator.

#include <iostream>

using namespace std;

int main()
{
    int bookCover;
    cout << "Enter the number of book covers you have : " ;
    cin >> bookCover;

    if(bookCover < 10){
        bookCover += 5;
    }
    cout << "Number of book covers you have : " << bookCover;

    return 0;
}