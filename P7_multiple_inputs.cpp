// C++ Program to take multiple inputs 
#include<iostream>

using namespace std;

int main()
{
    int age;
    char ch;
    float ht;

    cout<< "Enter your age : ";
    cin >> age;
    cout << "Enter yout char : ";
    cin >> ch;
    cout << "Enter your height : ";
    cin >> ht;

    cout<<"Ohh your char is " << ch << " as your age is " << age << " and the height is " << ht << " m";

    return 0;
}