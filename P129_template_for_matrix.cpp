// C++ program to demonstrate the template for matrix or 2D array
#include<iostream>
using namespace std;

template <class T>
class Matrix {
    public : 
    T mtr[50][50];
};

int main(){
    Matrix <int> x;
    Matrix <float> y;
    Matrix <double> z;

    return 0;
}