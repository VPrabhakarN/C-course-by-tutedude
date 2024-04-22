// C++ program to demonstrate an array

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // defining an array 
    int arr[] = {1,2,3,4,5,6,7,8};

    // access elements
    cout << "\n***Accessing one by one element by manually***\n";
    cout << "Array elements : "; 
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " " << endl;

    // using for loop to access elements from the array
    cout << "\n***Accessing one by one element using for loop***\n";
    for(int i=0; i<8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
