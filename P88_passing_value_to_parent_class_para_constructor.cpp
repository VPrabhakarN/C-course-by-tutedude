// C++ program to call parent class's constructor

#include<iostream>

using namespace std;

// creating a parent class 
class Parent{
    private :
    int x;

    public :

    // default constructor 
    Parent(){
        x = 0;
        cout << "Parent class's defualt constructor is called." << endl;
    }

    // parameterized constructor 
    Parent(int b){
        x = b;
        cout << "Parent class's parameterized constructor is called." << endl;
    }

    void show1(void){
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
        y = 19;
        cout << "Child class's default constructor is called" << endl;
    }

    // parameterized constructor 
    Child(int a, int b):Parent(b){
        y = a;
        cout << "Child class's parameterized constructor is called" << endl;
    }

    void show2(void){
        cout << "X : " << y << endl;
    }
};


int main(){

    // creating instance as well as calling deafult constructor of parent class and child class
    Child ch1;
    ch1.show1();
    ch1.show2();

    // creating another instance as well as calling parameterized constructor
    Child ch2(3,6);
    ch2.show1();
    ch2.show2();


    return 0;
}