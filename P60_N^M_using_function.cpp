// C++ program to define the n^m values

#include<iostream>

using namespace std;

// defining a function 
int po_wer(int a, int b)
{
    // defining n^m
    int val = 1;
    for(int i=0; i<b; i++)
    {
        val *= a;
    }

    return val;
}

int main()
{
    int n, m;

    // taking values from the user 
    cout << "Enter the value of n & m respectibely : ";
    cin >> n >> m;

    // calling a function 
    int ans = po_wer(n,m);
    cout << " Value of " << n << " raised to " << m << " is " << ans << endl;

    return 0;
}