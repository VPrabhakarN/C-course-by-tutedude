/* Q -> Write a program to find the roots of a quadratic equation. 
        Implement Exception handling to handle the case where a = 0 */

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c, d; // d = discriminant
    float x1, x2; // x1 = first toot, x2 = second root 
    cout << "Given the following formula for a quadratic equation" << "a*(x^2) + b*(x) + c = 0" << endl;
    cout << "Enter the value of a, b & c : ";

    // try block
    try{
        cin >> a >> b >> c;
        if(a == 0){
            throw 101;
        }
    }
    catch(int e){
        cout << "You cannot proceed with calculating the roots.." << "Quadratic equation's quadratic part is missing" << endl;
        cout << "a cannot be zero. ERROR CODE : " << e << endl;
        return 0;
    }

    d = (b*b) - (a*a*c);
    if(d == 0){
        cout << "Roots are real and equal" << endl;
        x1 = -b/(2.0*a);
        x2 = x1;
        cout << "Roots are real but unequal" << endl;
    }
    else if(d > 0){
        cout << "Roots are real but unequal" << endl;
        x1 = (-b + sqrt(d)) / (2.0*a);
        x2 = (-b - sqrt(d)) / (2.0*a);
        cout << "Roots are " << x1 << " and " << x2 << endl;
    }
    else {
        cout << "Roots are not real. They are imaginary" << endl;
    }
    return 0;

}