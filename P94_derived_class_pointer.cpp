// C++ program to define derived class pointer

#include<iostream>

using namespace std;

// defining a parent class
class A {
    public :
    int a;
    int b;

    A(){
        cout << "Parent class's constructor is called...." << endl;
    }

    void setValues1(int a1, int b1){
        a = a1;
        b = b1;
    }

    void printValues(void){
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
    }
};

// inheritance 
class B : public A{
    public :
    int c;
    int d;

    B(){
        cout << "Child class's constructor is called...." << endl;
    }

    void setValues(int c1, int d1){
        c = c1;
        d = d1;
    }

    void printValues(void){
        cout << "C : " << c << endl;
        cout << "D : " << d << endl;
    }
};

int main(){

    // creating pointer object or instance of derived or child class
    B *point;
    B point1;
    point = &point1;

    point->setValues(19, 11);
    point->printValues();

    point->c = 11;
    point->d = 12;
    cout << "C : " << point->c << " " << "D : " << point->d << endl; 

    return 0;
}