// C++ program to demonstrate base class pointer 

#include<iostream>

using namespace std;

// defining a parent class
class A{
    public :
    int a;
    int b;

    A(){
        cout << "Base class's constructor is called....." << endl;
    }

    void setValues(int a1, int b1){
        a = a1;
        b = b1;
    }

    void printValues(){
        cout << "A : " << a << endl << "B : " << b << endl;
    }
};

// inheritance 
class B : public A{
    public : 
    int c;
    int d;

    B(){
        cout << "Derived class's constructor is called..." << endl;
    }

    void setValues(int c1, int d1){
        c = c1;
        d = d1;
    }

    void printValues(){
        cout << "C : " << c << endl << "D : " << d << endl;
    }
};

int main(){

    // creatinf pointer object of base class
    A *base;
    B derived;
    base = &derived;

    base->a = 19;
    base->b = 11;
    cout << "A : " << base->a << "   " << "B : " << base->b << endl;

    base->setValues(12, 18);
    base->printValues();

    return 0;
}