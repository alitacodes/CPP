#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Library {
    protected: 
        string bookName;
        int issueNum;

    public:
        Library (string name , int issue) : bookName(name) , issueNum(issue){
            cout << "Book construstor called " << bookName << endl;
        };
    
    virtual void write() const{
        cout << "The book" << bookName << "has been written." << endl; 
    }

    virtual void issuing() const{
        cout << "Issuing" << issueNum << "number of books." << endl; 
    }

    virtual ~Library() {
        cout << "Book destructor called for" << bookName << endl;
    }
};

//inherting

class Detective : public Library{
    public:
        Detective(int issue) : Library ("Detective" , issue){
            cout << "Detective constructor called" << endl;
        }
    
        void write() const override {
            cout << "Writing " << bookName << "by giving only specific details." << endl;
        }

        ~Detective(){
            cout << "Detective destructor called" << endl;
        }
};

class Science : public Library {
    public:
        Science(int issue) : Library ("Science" , issue){
            cout << "Science constructor called" << endl;
        }

        void write() const override final {         // final keyword - ensures no further override of this function
            cout << "Writing " << bookName << "by diving deep into the scientific world." << endl;
        }

        ~Science () {
            cout << "Science destructor called" << endl;
        }
};

// class Physics : public Science {
//     public:
//         void write() const override final {    
//             cout << "Writing " << bookName << "by diving deep into the scientific world." << endl;
//         }

// };


int main(){
    Library *book1 = new Detective(5);
    Library *book2 = new Science(3);

    book1->write() ;
    book1->issuing() ;

    book2->write() ;
    book2->issuing() ;

    delete book1;
    delete book2;

    return 0;
}