// C++ program to deomstrate constructor overloading 

#include<iostream>

using namespace std;

// defining a class
class Demo {
    private:
    int a;
    int b;

    public:
    Demo(void){
        a = 1;
        b = 2;
    }

    Demo(int x, int y){
        a = x;
        b = y;
    }

    void show_values(){
        cout << "A : " << a << endl << "B : " << b << endl;
    }


};

int main(){

    // creating instance of the class 
    // constructor(void)
    Demo d;
    d.show_values();

    Demo b(10, 11);
    b.show_values();

    return 0;
}