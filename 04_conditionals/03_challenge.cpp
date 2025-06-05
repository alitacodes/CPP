// A plant nursery offers discount based on the number of plants bought. WAP that checks the number of plants bought and applies a discount : 
// More than 20 plants - 20% discount
// Btw 10 and 20 plants - 10% discount
// Less than 10 plants - No discount

#include <iostream>

using namespace std;

int main(){
    int plantCount;
    double pricePerPlant = 60, totalPrice, discountPrice;

    cout << "Enter the number of plants you want to buy: ";
    cin >> plantCount;

    if(plantCount > 20){
        totalPrice = plantCount * pricePerPlant;
        discountPrice = totalPrice - (totalPrice * 0.2);
    }
    else if(plantCount >=10 && plantCount <= 20){
        totalPrice = plantCount * pricePerPlant;
        discountPrice = totalPrice - (totalPrice * 0.1);
    }
    else{
        totalPrice = plantCount * pricePerPlant;
        discountPrice = 0;
    }

    cout << "\nTotal Price = " << totalPrice;
    cout << "\nDiscounted Price = " << discountPrice;
    
    return 0;
}