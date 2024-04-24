// C++ program to check the matrix is either symetric or skew-symetric or neither 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // taking input from  ther user 
    int n;
    cout << "Only square matrix has the property to be symetric or skewed-symmetric" << endl;
    cout << "Please enter the square matrix order (n), such that the order would be n*n" << endl;
    cin >> n;

    int arr[n][n];
    cout << "Enter the matrix " << endl;

    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // transpose of the matrix 
    int temp[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            temp[i][j] = arr[j][i];
        }
    }

    // Checking the matix is symmetric or not 
    cout <<endl << "Checking the matirx is symmetric or not" << endl;
    bool is_symmetric = true;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j] == temp[i][j])
            {
                continue;
            }
            else 
            {
                is_symmetric = false;
                break;
            }
        }
        if(!is_symmetric)
        {
            break;
        }
    }

    if(is_symmetric)
    {
        cout << "The matrix is symmetric." << endl;
    }
    else 
    {
        cout << "The matrix is not symmetric" << endl;
    }

    // checking the matrix is skewed-symmetric or not 
    cout << endl << "Checking the matrix is skewed-symmetric matrix or not" << endl;
    bool is_skewed_symmetric = true;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j] == -temp[i][j])
            {
                continue;
            }
            else 
            {
                is_skewed_symmetric = false;
                break;
            }
        }
        if(!is_skewed_symmetric)
        {
            break;
        }
    }

    if(is_skewed_symmetric)
    {
        cout << "The matrix is skewed...!" << endl;
    }
    else 
    {
        cout << "The matrix is not skewed...!" << endl;
    }
    return 0;
}