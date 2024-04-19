// C++ program to define area of the triangle

#include <iostream> 

using namespace std;

int main()
{
    int height, base;
    float area;

    // taking height from the user 
    cout << "Please enter the height of the triangle : ";
    cin >> height ;

    // taking base from the user 
    cout << "Please enter the base of the triangle : ";
    cin >> base;

    // calculating the area of the triangle
    
    // we have to perform type casting 
    area = (float)height * (float) base / 2;

    cout << "Area of the trianle : " << area << endl;

    return 0;
}