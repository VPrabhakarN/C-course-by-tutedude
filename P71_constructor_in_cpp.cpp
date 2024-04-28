// C++ program to demonstrate constructor

#include<iostream>

using namespace std;

// define a class 
class Testing {
    private :
    int a;
    int b;

    public :
    int c;
    int d;

    // defining a constructor
    Testing(){
        a = 0;
        b = 0; 
        c = 0;
        d = 0;
    }


    void show(void){
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
        cout << "C : " << c << endl;
        cout << "D : " << d << endl;
    }
};

int main(){

    // creating an instance (object)
    Testing x;

    // calling method to show values
    x.show();

    return 0;
}