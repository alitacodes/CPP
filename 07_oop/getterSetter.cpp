// getter (gets the value) | setter (sets the value)
// getter name is specified - getName

#include<iostream>
#include<vector>

using namespace std;

class Library{
    private:
        string bookName;
        int issueNum;
        vector<string> index;

    public:
        Library(){
            bookName = "Unknown";
            issueNum = 1;
            index = {"About the Author" , "Introduction"};
        }

        Library(string name , int issue , vector<string> content){
            name = bookName;
            issue = issueNum;
            content = index;
        }

        //to give a controlled access to an object 
        //getter for bookName
        string getBookName(){
            return bookName;
        }

        //setter for bookName
        void setBookName(string name){
            bookName = name;
        }

        // getter for issueNum
        int getIssueNum(){
            return issueNum;
        }

        //setter for issueNum
        void setIssueNum(int issue){
            issueNum = issue + 1 ; 
        }

        // getter for index
        vector<string> getIndex(){
            return index;
        }

        //setter for index
        void setIndex(vector<string> content){
            index = content;
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
    Library lib;

    lib.setBookName("nancy drew");
    lib.getBookName();

    lib.setIssueNum(2);
    lib.getIssueNum();
    
    lib.setIndex({"About" , "Chapter One" , "Chapter Two"});
    lib.getIndex();

    lib.bookDetails();

    return 0;
}