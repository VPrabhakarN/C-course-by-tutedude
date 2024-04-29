// Q.1) Write an example program demonstrating function overloading.

#include<iostream>

using namespace std;

// defining a class 
class Student{
    private :
    string name;
    int age;

    public :
    Student(void){
        name = "NULL";
        age = 0;
    }

    Student(string n, int a){
        name = n;
        age = a;
    }

    Student(string n){
        name = n;
        age = 0;
    }

    Student(int a){
        name = "NULL";
        age = a;
    }

    void display(void){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main(){

    cout << "THIS IS AN METHOD OVERLOADING EXAMPLE" << endl;
    cout << endl;

    // creating instance of the student class 
    cout << "Not passing any argumnets" << endl;
    Student a;
    a.display();

    cout << "\nPassing 2 arguments" << endl;
    Student b("Vijay", 20);
    b.display();

    cout << "\nPassing 1 arguments" << endl;
    Student c("Vijay");
    c.display();

    cout << "\nPassing 1 arguments" << endl;
    Student d(19);
    d.display();
    
    return 0;
}