// C++ program to define type of the constructors

#include<iostream>

using namespace std;

// defining a class 
class ComplexNumbers{
    private :
    int real;
    int imag;
    public :
  
    ComplexNumbers(void){
        real = 0;
        imag = 0;
    }

    ComplexNumbers(int x, int y){
        real = z.real;
        imag = z.imag;
    }

    void display (void);
};

void Complexnumbers::display(void){
    cout << real << " + " << imag << "i" << endl;
}

int main(){
    ComplexNumbers a;
    a.display();
    ComplexNumbers b(2,3);
    b.display();
    ComplexNumbers c(b);
    c.display();

    return 0;
}