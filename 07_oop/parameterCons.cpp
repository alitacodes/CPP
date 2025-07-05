//parameter constructor

#include <iostream>
#include <vector>

using namespace std;

class Library{
    public:
    // class memebers (attributes)
    string bookName;    //name of the book
    int issueNum;       //number of books issued 
    vector<string> index;       // topics in index

    void bookDetails (){
        cout << "Book name: " << bookName << endl;
        cout << "Number of books issued: " << issueNum << endl;
        cout << "Book Details: " ;
        for(string i : index){
            cout << i << " | " ;
        }
        cout << endl;
    }

    //any operations can be inside the constructor(as it is a func)
    Library(string name , int issue , vector<string> contents){
        bookName = name;
        issueNum = issue;
        index = contents;
        cout << "Parameter Constructor called here" << endl;
    }
};

int main(){
    Library blackhole("theory of blackhole" , 1 , {"about" , "chapter one" , "chapter two"}) ;        
    //the constructor is called at this line where the object (default Book) is created
    
    blackhole.bookDetails();

    Library copiedBook = blackhole;
    copiedBook.bookDetails();

    blackhole.bookName = "stephen hawkings";    // *due to this

    cout << "Blackhole" << endl;
    blackhole.bookDetails();        // *only the book name gets updated here

    cout << "Copied Version" << endl;
    copiedBook.bookDetails();       // *no changes occur here (the previuos value is printed)
    
    return 0;
}