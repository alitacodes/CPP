#include <iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount (string accNum , double bal){
            accountNumber = accNum;
            balance = bal;
        }       

        //getter
        double getBalance() const {
            return balance;
        }

        //method to deposit money
        void deposit (double amount){
            if(amount > 0){
                balance += amount;
                cout << "Amount deposited : " << amount << endl;
            }
            else{
                cout << "Insuffienct balance for deposit!" << endl;
            }
        }

        void withdraw (double amount){
            if(amount > 0 && amount < balance){
                balance -= amount ;
                cout << "Amount withdrwan : " << amount << endl;
            }
            else{
                cout << "Invalid withdrawn amount" << endl;
            }
        }

};

int main(){
    BankAccount myAcc("1123678" , 1000);

    myAcc.getBalance();

    myAcc.deposit(299);
    myAcc.withdraw(100);

    return 0;
}