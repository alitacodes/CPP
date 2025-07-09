// if virtual func comes under any class, then that class is called abstract class
// in virtual func the functionality is not defined 

#include <iostream>
#include <string>

using namespace std;

//abstract class
class Tea{
    public:

        //virtual chize user se chupe rahengi
        virtual void prepareIngredients() = 0;     //pure vitual function
        virtual void brew() = 0;     //pure vitual function
        virtual void serve() = 0;     //pure vitual function

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }

    // abstract class me object nhi liye jate, it is expected that there will be derived class to define any objects
};

//derived class

class GreenTea : public Tea{
    // it is expected in the derived class to override the virtual functions present in abstract class

    void prepareIngredients() override {
        cout << "Tea leaves and water is prepared." << endl;
    }

    void brew() override {
        cout << "Green Tea brewed." << endl;
    }

    void serve() override {
        cout << "Green Tea served." << endl;
    }

};

class MasalaTea : public Tea{

    void prepareIngredients() override {
        cout << "Tea leaves and water is prepared." << endl;
    }

    void brew() override {
        cout << "Masala Tea brewed." << endl;
    }

    void serve() override {
        cout << "Masala Tea served." << endl;
    }

};

int main(){
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}