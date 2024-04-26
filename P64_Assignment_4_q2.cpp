/* Create a calculator that takes a number, a basic math operator (+,-,*,/,^), and a second number all from user input, and  
have it print the result of the mathematical operation. The mathematical operations should be wrapped inside of functions. */

#include<iostream>

using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int mod(int a, int b);
int raisedto(int a, int b);

int main()
{
    int x, y;

    // Taking value from the user 
    cout << "Enter value of X : ";
    cin >> x;
    cout << "Enter value of Y : ";
    cin >> y;

    // Caluculator menu 
    cout << "************** CALCULATOR ****************" << endl;
    cout << "              1. Addition                 " << endl;
    cout << "              2. Subtraction                 " << endl;
    cout << "              3. Multiplication                " << endl;
    cout << "              4. Division                 " << endl;
    cout << "              5. Modulas                 " << endl;
    cout << "              6. X ^ Y                 " << endl;

    // taking input as choice 
    int ch, ans;
    cout << "Enter any operation to perform : " ;
    cin >> ch;

    // using switch statement 
    switch (ch)
    {
    case 1 :
            ans = add(x,y);
            cout << " Addition : " << ans << endl;
            break;

    case 2 : 
            ans = sub(x,y);
            cout << "Subtraction : " << ans << endl;
            break;

    case 3 : 
            ans = mul(x,y);
            cout << "Multiplication : " << ans << endl;
            break;

    case 4 : 
            ans = divi(x,y);
            cout << "Division : " << ans << endl;
            break;

    case 5 : 
            ans = mod(x,y);
            cout << "Mod : " << ans << endl;
            break;

    case 6 : 
            ans = raisedto(x,y);
            cout << "X^Y : " << ans << endl;
            break;
    
    default:
            cout << "Invalid choice ! please try again ...... " << endl;
            break;
    }

     return 0;
}

// function for addition
int add(int a, int b)
{
    return a+b;
}

// function for subtraction
int sub(int a, int b)
{
    return a-b;
}

// function for multiplication
int mul(int a, int b)
{
    return a*b;
}

// function for division
int divi(int a, int b)
{
    return a/b;
}

// function for mod
int mod(int a, int b)
{
    return a%b;
}

// function for x^y
int raisedto(int a, int b)
{
    for(int i=0; i<b; i++)
    {
        a*=a;
    }

    return a;
}
