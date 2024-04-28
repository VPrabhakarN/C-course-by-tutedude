// C++ program to define pointer of object

#include<iostream>

using namespace std;

// defining a class 
class Student{
    private:
    string name;
    int age;

    public:
    Student(string s, int a){
        name = s;
        age = a;
    }

    void show_info(void);
};

void Student::show_info(void){
        cout << "Name : " << name << endl << "Age : " << age << endl;
    }

int main(){
    // creating object of class student
    Student a("vijay", 20);
    a.show_info();

    // creating pointer object 
    Student *b;
    b = &a;
    b -> show_info();
    return 0;
}