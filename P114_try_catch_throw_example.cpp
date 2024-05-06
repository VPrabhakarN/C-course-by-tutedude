// C++ program to define the exception

#include<iostream>
using namespace std;

int main(){

    int m, n, o;

    // taking input from the user 
    cout << "Enter the values : ";
    cin >> m >> n ;

    try{
        if(n == 0){
            throw 1;
        }

        o = m/n;
        cout << "O : " << o;
    }
    catch(int e){
        cout << e ;
    }

    return 0;
}
