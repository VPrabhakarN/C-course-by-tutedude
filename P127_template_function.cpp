// C++ program to demonstrate  template function 
#include<iostream>
using namespace std;

// defining the template function
template <class T>
int greatestNum(T a, T b, T c){
    if(a > b){
        if(a > c){
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if(b > c){
            return b;
        }
        else {
            return c;
        }
    }
}

int main(){
    int a = 2, b = 3, c = 12;
    cout << greatestNum<int>(a, b, c);
    return 0;
}