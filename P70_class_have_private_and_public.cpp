// C++ program to define a class 

#include<iostream>

using namespace std;

// defining a class 
class Tetsing {
    // private element
    private :
    float performance;
    int salary;

    // public element
    public :
    string name;
    int age;

    // defining method to access private elements and update their value
    void value_set(void){
        performance = 90.60;
        salary = 200000;
    }

    // printing the values in method
    void show_values(void){
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Performance : " << performance << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    // creating instance of class Testing 
    Tetsing x;

    // Updating values from the class by accessing element 
    x.name = "Vijay Nagane";
    x.age = 19;

    // calling or accessing method from the class 
    x.value_set();

    // show elements by calling another method from the class 
    x.show_values();

    return 0;
}