// Q.2) Write a program to demonstrate integer exception and character exception.
#include<iostream>
using namespace std;

void division(int a, int b);
void char(string n);

int main(){
    int a, b;

    try{
    // taking input from the user 
    cout << "Enter the values of a & b respectively : ";
    cin >> a >> b ;

    // calling function 
     void division(a, b);
    }

    // taking input from the user 
    string s;
    cout << "Enter the string : ";
    cin >> s ;
    void  char(s);

    return 0;
}

void division(int a, int b){
    if(b == 0){
        throw 0;
    }
    catch(int e){
        cout <<  "Division by " << e << " zero not possible" << endl;
    }

    }
    cout << "Division : " << (a / b) << endl;


void char(String n){
    int length = n.size();
    char arr[length];

    try{
    for(int i=0; i < length+1; i++){
        arr[i] = n[i];
    }
    }

    catch (...){
        cout << "The size of array is not matched with the size of the string..." << endl;
    }
}