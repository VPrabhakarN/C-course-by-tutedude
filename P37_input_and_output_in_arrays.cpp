// C++ program to demonstrate array and take input from the user for array elements 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i, size;

    // taking size of the array from the user
    cout << "\nEnter the size of an array : ";
    cin >> size;

    // defining an array with size taken from the user 
    int arr[size];

    // taking elements from the user 
    cout << "\nEnter " << size << " elements in the array \n";

    for(i=0; i<size; i++)
    {
        cout << "Enter element " << i << " : " ;
        cin >> arr[i];
    }

    cout << "\n****Array elements your entered**** \n";
    // traversing an array using for loop 
    for(i=0; i<size; i++)
    {
        cout << "Element " << i << " : " << arr[i] << endl;;
    }

    return 0;
}