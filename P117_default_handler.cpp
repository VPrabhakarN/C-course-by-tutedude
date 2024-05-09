// C++ program to demonstrate the the exception handling 
#include<iostream>
using namespace std;

int division(int a, int b);

int main(){
    int a , b, c;

    // Taking value from the user
    cout << "Enter the value of a & b respectively : ";
    cin >> a >> b ;

    // using try block
    try{
        c  = division(a, b);
        cout << c;
    }

    // defualt cather
    catch(...){
        cout << "Handling all the rest errors";
    }

    return 0;
}

// defining a function
int division(int a, int b){
    if(b == 0){
        throw (float)1.1;
    }
    else {
        return (a/b);
    }
}