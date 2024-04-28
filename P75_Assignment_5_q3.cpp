// Q.3) C++ Program to find Factorial of a number using class

#include<iostream>

using namespace std;

class Factorial {

    private : 
    int n;
    int fact;

    public :
    Factorial(int num){
        n = num;
        fact = 1;
    }

    void facto(){
        
        // using for loop 
        for(int i=1; i<=n; i++){
            fact *= i;
        }

        cout << "Factorial : " << fact << endl;
    }
};


int main(){

    int num;

    // taking value from the user 
    cout << "Enter the number : ";
    cin >> num ;

    // Creating instance of the class
    Factorial f(num);


    // calling method from the class
    f.facto();


    return 0;
}