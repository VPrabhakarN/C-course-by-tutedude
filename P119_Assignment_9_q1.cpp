// Q.1) Write a program to explain exception handling that should print  "Division by zero not possible" if someone tries to divide a number with 0

#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    try{
    cout << "Enter two numbers : " ;
    cin >> a >> b ;

    if(b == 0){
        throw 0;
    }
    c = a/b;
    cout << "C : " << c << endl;
    }

    catch(int e){
        cout <<"Division by " << e << " zero not possible" <<  endl;
    }
    return 0;
}