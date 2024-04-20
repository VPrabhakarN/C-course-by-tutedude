#include<iostream>
#include<cmath> // Include cmath header for sqrt function

using namespace std;

int main()
{
    int a, b, c, discriminant;
    cout << "As per the following notation of a quadratic equation : a(x^2) + b(x) + c = 0" << endl;

    cout << "Enter the values of a, b, and c respectively " << endl;

    cin >> a >> b >> c;

    discriminant = (b*b)-(4*a*c);

    float x1, x2;
    if(discriminant == 0)
    {
        x1 = -b / (2.0*a);
        cout << "Roots are equal" << endl;
        cout << "x1 = x2 : " << x1 << endl;
        return 0;
    }
    else if(discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2.0*a);
        x2 = (-b - sqrt(discriminant)) / (2.0*a);
        cout << "Roots are real and not equal" << endl;
        cout <<"x1 : " << x1 << " and x2 : " << x2 << endl;
        return 0; 
    }
    else {
        cout << "Roots are not equal they are imaginary" << endl;
        return 0;
    }

    return 0;
}
