// C++ program to print n even numbers

#include<iostream> 

using namespace std;

int main()
{
    int i = 0; 
    int n;
    int val;

    // Taking input from the user 
    cout << "Enter the number : " ;
    cin >> n;

    val = 0;
    cout<< "Even numbers : ";
    while(i<n)
    {
        val +=2;
        cout << val << " ";
        i++;
    }

    return 0;
}