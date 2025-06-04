// Challenge : A book shop offers loyalty program. Customers who buy more than 20 books get a special "Gold" badge, and those who buy 10 to 20 books get a "Silver" badge. WAP to display the badge they will receive based on the number of books they buy

#include <iostream>

using namespace std;

int main()
{
    int books;
    cout << "Enter the number of books you bought from this shop : ";
    cin >> books;

    if(books > 20){
        cout << "You achieved a Gold Badge :O" ;
    }
    else if(books >=10 && books <= 20){
        cout << "You achieved a silver badge :D";
    }
    else{
        cout << "You should read books :(";
    }
    return 0;
}