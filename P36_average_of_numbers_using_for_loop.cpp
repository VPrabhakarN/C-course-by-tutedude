// C++ program to calculate the average of the numbers

#include<iostream> 

using namespace std;

int main()
{
    int i, n, sum, val;
    float average;

    // taking input from the user to take n number of inputs 
    cout << "Enter the number to take n number of inputs : ";
    cin >> n;

    sum = 0;

    // using for loop 
    for(i=0; i<n; i++)
    {
        cin >> val;
        sum +=val;
    }

    average = (float) sum / n;

    cout << "The average of " << n << " number is " << average << endl;

    return 0;
}