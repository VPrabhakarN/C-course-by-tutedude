// C++ program to define function 

#include<iostream>

using namespace std;

// defining a function
void cirlce_details(int r)
{
    float area, c;

    area = 3.14 * r * r;
    c = 2 * 3.14 * r ;

    // printing the area and circumference 
    cout << "Area : " << area << "\t" << "Circumference : " << c << endl;
}

int main()
{
    int radius;

    // taking input from the user 
    cout << "Enter the radius : ";
    cin >> radius;

    // caling the function
    cirlce_details(radius);

    return 0;
}