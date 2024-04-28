// Q.2) C++ program to find Reverse of a Number using class

#include<iostream>

using namespace std;

// defining a class 
class Reverse {
    public :
    int n;

    Reverse(int num){
        n = num;
    }

    void reverse(){
       int reverse_number = 0, rem;

       // using while loop 
       while(n != 0){
        rem = n % 10;
        reverse_number = reverse_number *10 + rem;
        n = n/10;
       }

       cout << "Reverse number : " << reverse_number << endl;
    }
};

int main(){

    int num;

    // taking value from the user 
    cout << "Enter the number : " ;
    cin >> num ;
    
    // creating instance of the class 
    Reverse x(num);
    x.reverse();

    return 0;
}