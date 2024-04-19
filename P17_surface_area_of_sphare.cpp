// C++ program to define surface area of the sphare 

#include<iostream>

using namespace std;

int main()
{
    int radius;
    float s_area, PI;
    PI = (float) 22 / (float) 7;

    // Taking the value of the radius from the user 
    cout << "Enter the radius of the sphare : ";
    cin >> radius;

    s_area = 4 * PI * radius * radius;

    // surface area of the sphare 
    cout << "The sureface area of the sphare : " << s_area << endl;

    return 0;
}