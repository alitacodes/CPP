// Challenge: Create a program that checks if a user is eligible for a book subscription discount. The discount applies if the user is either a student or has purchased more than 15 books. Ask the user to input their status (student or not) and their book count.

#include<iostream>

using namespace std;

int main()
{
    int bookCount;
    string profession;

    cout << "Enter your profession (student or not): " ;
    cin >> profession ;

    cout << "Enter the number of books you have purchased : ";
    cin >> bookCount;

    if(profession == "student" || bookCount > 15){
        cout << "You are eligible for book subscription discount :D" ;
    }
    else{
        cout << "You are not eligible for book subscription discount :P" ;
    }
    return 0;
}
