// C++ program to print n number of stars 

#include<iostream> 

using namespace std;

int main()
{
    int n, i;
    i = 0;
    char ch = '*';

    // taking value of n from the user 
    cout << "Enter the number : " ;
    cin >> n;

    // using while loop to print stars n times
    while(i<n)
    {
        cout << ch << endl;
        i++;
    }

    return 0;
}