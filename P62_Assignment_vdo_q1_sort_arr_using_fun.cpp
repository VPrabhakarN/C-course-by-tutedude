// C++ program to define a function to sort an array 

#include<iostream>

using namespace std;

void swap(int*, int*);
void arraySort(int *, int);

int main()
{
    int n; // size of the array
    cout << "Enter the size of the array : ";
    cin >> n;

    // defining an array
    int arr[n];

    // taking input from the user 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorting......";

    // calling function 
    arraySort(arr, n);

    // sorted array 
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;    
}

void arraySort(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] <= arr[j])
            {
                continue;
            }
            else 
            {
                swap(arr+i, arr+j);
            }
        }
    }

}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}