// C++ program to demonstrate multidimensional array 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i, j;

    // defining matrix 3*3
    int arr[3][3];

    // Taking input from the user 
    cout << "Enter the array elements : " ;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
        cout << " " << endl;
    }

    // traversing array 
    cout << "Array elements : ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << " " << endl;
    }
    return 0;
}