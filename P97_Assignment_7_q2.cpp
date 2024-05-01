// Q.2) -> 

#include<iostream>

using namespace std;

class Base{
    private :
    int data1, data2;

    public :
    Base(int a=0, int b=0) : data1(a), data2(b)
    {

    }
};

class Derived : public Base {
    public : 
    void show(){
        cout << "Data 1 : " << data1 << " " << "Data 2 : " << data2 << endl;
    }
};

int main(void){

    Derived d;
    d.show();
    
    return 0;
}