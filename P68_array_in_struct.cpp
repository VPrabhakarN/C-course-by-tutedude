// C++ program to demonstrate structure and array inside it

#include<iostream>

using namespace std;

// define structure 
struct employee {
    string name;
    int age;
    int salary;
    float performance;
};

int main()
{
    int n;

    // taking input from the user 
    cout << "Enter total number of employee : ";
    cin >> n;

    employee record[n];

    for(int i=0; i<n; i++){
        cin >> record[i].name >> record[i].age >> record[i].salary >> record[i].performance;
    }

    for(int i=0; i<n; i++){
        cout << "\nName : " << record[i].name << endl << "Age : " << record[i].age << endl << "Salary : " << record[i].salary << endl << "Performance : " << record[i].performance << endl;
        cout << endl;
    }

    return 0;
}