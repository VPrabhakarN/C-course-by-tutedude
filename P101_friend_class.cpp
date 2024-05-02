// C++ program to demonstrate the friend classes

#include<iostream>

using namespace std;

// defining class B
class B;

// defining class A
class A{
    private :
    int gamma;

    public :
    int a, b;

    friend B;
};

// Friend class B is defined 
class B{

    public :

    void checkValue(void){
        A e;

        cout << "Function in the Class B" << endl;

        // accessing value from the class A by creating it's object 
        e.a = 10;
        cout << "A : " << e.a << endl;

        e.b = 20;
        cout << "B : " << e.b << endl;

        // we can access even private elements using friend keyword
        e.gamma = 1911;
        cout << "Gamma : " << e.gamma << endl;
    }
};

int main(){

    // creating object or instanc of the class B 
    B b;
    b.checkValue();

    return 0;
}