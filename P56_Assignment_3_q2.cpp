// write a program to check whether a given character is contained in a string or not and find its position?

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string in_put;
    char ch;

    // taking input from the user 
    cout << "Enter the string : ";
    cin >> in_put;

    cout << "Enter character to check if it is in string you entered : ";
    cin >> ch ;

    // checking the char
    int len = in_put.length(); 
    int count = 0;
    bool is_contained = false;
    for(int i=0; i<len; i++)
    {
        if(ch == in_put[i])
        {
            is_contained = true;
            count = i;
            break;
        }
    }

    if(is_contained)
    {
        cout << ch << " is contained at " << count << " index" << endl;
    }
    else 
    {
        cout << ch << " is not contained " << endl;
    }

    return 0;
}