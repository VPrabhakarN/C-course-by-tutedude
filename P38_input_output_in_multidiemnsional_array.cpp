// C++ program to demonstrate the multidimensional array 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i, j, n;
     
    // taking the size of the col and rows from the user 
    cout << "Enter the size of an array's col & rows : ";
    cin >> n;

    // defining the array 
    int arr[n][n];

    // taking value from the user 
    cout << "Enter the array elements : " << endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> arr[i][j]; 
        }
    }

    // traversing the array 
    cout << "Array matrix as follows : " << endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << " " << endl;
    }
}