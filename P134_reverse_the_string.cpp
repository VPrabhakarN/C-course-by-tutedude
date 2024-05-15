// C++ program to reverse the string 

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    // defining string 
    string s = "Vijay Nagane";
    cout << "The string : " << s << endl;

    // reverse the string 
    reverse(s.begin(), s.end());
    cout<< "Reverse string : " << s << endl;

    return 0;
}