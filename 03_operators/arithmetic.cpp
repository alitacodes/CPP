// Challenge : create a program that calculates the total price of books. The user inputs the number of books they want and the price per book. The program should calculate the total price, apply 5% discount if the total price is above a certain amount and show the final price

#include <iostream>

using namespace std;

int main(){
    int books;
    double pricePerBook, totalPrice, discountPrice;

    cout << "How many books do you want to borrow?\n" ;
    cin >> books;

    cout << "Enter price per book: " ;
    cin >> pricePerBook;

    totalPrice = books * pricePerBook;

    //apply 5% discount if totalPrice is above 500
    if(totalPrice > 500){
        discountPrice = totalPrice - (totalPrice * 0.5);
        cout << "Discounted Price is " << discountPrice;
    }
    else{
        cout << "Total Price is " << totalPrice;
    }

    return 0;
}