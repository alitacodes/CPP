//default constructor

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
    Library(){
        bookName = "Nancy Drew";
        issueNum = 2;
        index = {"about" , "chapter one" , "chapter infinity"};
        cout << "Constructor called here" << endl;
    }
};

int main(){
    Library defaultBook;        
    //the constructor is called at this line where the object (default Book) is created
    
    defaultBook.bookDetails();
    return 0;
}