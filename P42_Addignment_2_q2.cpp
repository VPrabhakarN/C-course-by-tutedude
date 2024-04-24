// Write a program in C++ to find the perfect numbers between 1 and 500
// The perfect numbers between 1 to 500 are : 6    28    496

#include<iostream>

using namespace std;

int main ()
{
    int k, i=1;
    int sum=0;

    for(k=1; k<=500; k++)
    {
           
            i = 1;
            sum = 0;
            while(i <= k/2)
            {
                if(k%i == 0)
                {
                    sum += i;
                }
                i++;
            }
            
            if(sum == k)
            {
                cout << k << " "; 
            }
    }
    return 0;
}