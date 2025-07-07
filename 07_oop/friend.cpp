#include<iostream>
#include<vector>

using namespace std;

// a class named library has been created
class Library{
    private:        //private block (not available everywhere)
    string bookName;
    int issueNum;

    public:     //public block (accesible everywhere)
        Library(string name, int issue) : bookName(name) , issueNum(issue) {}

        // declaration of friend function
        friend bool compareIssues(const Library &book1, const Library &book2);

        void details() const {      //function to show the book name only(after comparison)
            cout << "bookName: " << bookName << endl;
        }
};

//use of friend function (here, for comparison)
bool compareIssues(const Library &book1 , const Library &book2){
    return book1.issueNum > book2.issueNum;
}

int main(){

    //objects of class library has been created
    Library detective("Nancy Drew" , 5);    
    Library science("Physics" , 9);

    // use of void details() to show the book name only
    detective.details();
    science.details();

    // friend funtion's result comes here
    if(compareIssues(detective , science)){
        cout << "Nancy Drew has been issued MORE!";
    }
    else{
        cout << "Physics has been issued MORE!";
    }

    return 0;
}