// C++ program  to define a function 

#include<iostream>

using namespace std;

// defining a function 
int greatest_num(int x, int y, int z)
{
    // checking which number is greatest
    if(x >= y)
    {
        if(x >= z)
        {
            return x;
        }
        else 
        {
            return z;
        }
    }
    else if(y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c;

    // taking input from the user
    cout << "Enter the values of a, b & c respectively :  ";
    cin >> a >> b >> c;

    // callinga function 
    int g = greatest_num(a, b, c);

    // printing greatest number 
    cout << "The greatest number is : " << g << endl;

    return 0;
}