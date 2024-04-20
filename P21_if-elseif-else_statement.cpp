// C++ program to demonstrate 'if-elseif-else' statement 

#include<iostream>

using namespace std;

int main()
{
    int score;

    // taking value of the score from the user 
    cout << "Please enter your score : ";
    cin >> score;

    // using 'if-elseif-else' statement 
    if(score > 90)
    {
        cout << "You nailed it! Keep it up...";
    }
    else if(score <= 90)
    {
        cout << "You are working hard.... keep it up";
    }
    else if(score <= 75)
    {
        cout << "You need some reinforcement in your study schedule...";
    }
    else if(score < 60) 
    {
        cout << "You need to study atleast 1hr per day !!!!";
    }

    return 0;
}