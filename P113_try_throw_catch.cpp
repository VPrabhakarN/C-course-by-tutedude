// C++ program to demonstrate the execption handling 

#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    try{
    cout << "Enter two numbers : " ;
    cin >> a >> b ;

    if(b == 0){
        throw 1;
    }
    c = a/b;
    cout << "C : " << c << endl;
    }

    catch(int e){
        cout << e << endl;
    }
    return 0;
}