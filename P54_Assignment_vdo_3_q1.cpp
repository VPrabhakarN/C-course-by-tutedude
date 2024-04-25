// C++ program to check the given string is palindrome or not 

#include<iostream>
#include<string>



using namespace std;

int main()
{
    string input_str;

    // taking input from the user 
    cout << "Enter the string : " ;
    cin >> input_str ;

    // defining an array to reverse the string 
    int len = input_str.length();
    char palind_str[len];

    for(int i=0; i<len; i++)
    {
        palind_str[i] = input_str[len - 1 - i];
    }

    // checking the string is palindrome string or not
    bool is_palindrome = true;
    for(int i=0; i<len; i++)
    {
        if(palind_str[i] == input_str[i])
        {
            continue;
        }
        else 
        {
            is_palindrome = false;
            break;
        }
    }

    // if else condition to check the string is palindrome or not 
    if(is_palindrome)
    {
        cout << "The string your entered is palndrome ! " << endl;
    }
    else 
    {
         cout << "The string your entered is not palndrome ! " << endl;
    }

    return 0;
}