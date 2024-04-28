/* Write a class to store following attributes : 
Name 
Phone Number 
Job Post
Age 
to store the data of an office's employees */

#include<iostream>

using namespace std;

// defining a class 
class Employee {
    public :
    string name;
    string phone_no;
    string job_post;
    int age;

    void take_info()
    {
        cout << "Enter the name : ";
        cin >> name ;
        cout << "Enter Phone Number : ";
        cin >> phone_no;
        cout << "Enter the job post : ";
        cin >> job_post;
        cout << "Enter the age : ";
        cin >> age;
    }

    void show_info()
    {
        cout << "Name : " << name << endl << "Phone Number : " << phone_no << endl << "Job Post : " << job_post << endl << "Age : " << age << endl; 
    }
};

int main()
{
    cout << "********* Employee Details ***********" << endl ;

    // creating instance or object of Employee class
    Employee v;

    // calling method to take information 
    v.take_info();

    // calling method to show information
    v.show_info();

    return 0;
}