#include <iostream>
#include <vector>       //vector similar to array, used for fast random element access

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
};

int main(){
    Library libOne;
    libOne.bookName = "Byomkesh Bokshi";
    libOne.issueNum = 2;
    libOne.index = {"Chapter One" , "Chapter Two" , "Chapter Three"};

    libOne.bookDetails();

    Library libTwo;
    libTwo.bookName = "The Brief History of Time";
    libTwo.issueNum = 3;
    libTwo.index = {"Intro" , "Space Time Curve" , "Blackhole"};

    libTwo.bookDetails();

    return 0;
}

// libOne and libTwo are the copied version of the original one(i.e. Library)