// C++ program to define the volume of the sphare 

#include<iostream>

using namespace std;

int main()
{
    int radius;
    float volume, PI;
    PI = (float) 22 / (float) 7;

    // taking radius from the user 
    cout << "Enter the radius of the sphare : " ;
    cin >> radius;

    // volume of sphare 
    volume = ((float)4/(float)3) * PI * radius * radius * radius;

    // printing the volume of the sphare 
    cout << "Volume of the sphare : " << volume;

    return 0;
}