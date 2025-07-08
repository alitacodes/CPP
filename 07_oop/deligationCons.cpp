#include<iostream>
#include<vector>

using namespace std;

class Library{
    string bookName;
    int issueNum;
    vector<string> index;

    public:

        // deligation constructor
        Library(string name) : Library(name , 1 , {"About the Author" , "Intro"}){}

        //main constructor
        Library(string name , int issue , vector<string> content){
            bookName = name;
            issueNum = issue;
            index = content;

            cout << "Main conntructor called" << endl;
        }

        
        void bookDetails (){
            cout << "Book name: " << bookName << endl;
            cout << "Number of books issued: " << issueNum << endl;
            cout << "Book Details: " ;
            for(string i : index){
                cout << i << " | " ;
            }
            cout << endl;
        }
};

int main(){
    Library quickLib("Quick Lib");
    quickLib.bookDetails();

    return 0;
}