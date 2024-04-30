// C++ program for constructor inheritance

#include<iostream>

using namespace std;

// defininig a Parent class 
class Parent {
    private :
    int x;

    public :
 
    // default constructor 
    Parent(){
        x = 0;
        cout << "Parent class's default constructor is called." << endl;
    }

    // parameried constructor
    Parent (int a){
        x = a;
        cout <<"Parent class's paramerized constructor is called." << endl;
    }

    void show(void){
        cout << "X : " << x << endl;
    }
};

// inheritance 
class Child : public Parent {
    private :
    int y;

    public :
    
    // default constructor 
    Child(){
        y = 1; 
        cout << "Child class's default constructor is called." << endl;
    }

    // paramerized constructor
    Child(int b){
        y = b;
        cout << "Child class's paramerized constructor is called." << endl;
    }

    void display(void){
        cout << "Y : " << y << endl;
    }
};

int main(){

    // creating an object or instance of child class
    cout << "Doesn't pass anything with object" << endl;
    Child ch;
    ch.show();
    ch.display();
    cout << endl;

    cout << "Passing values with object" << endl;
    Child ch1(19);
    ch.show();
    ch.display();

    return 0;
}