// Write two classes implementing, inheritance on the two,
// show use of paramerized constructor of base class, while 
// making Derived class object

#include<iostream>

using namespace std;

// defining parent class 
class Student {
    protected :
    string name;
    int age;
    char grade;

    public :

    Student(string n, int a, char g){
        name = n;
        age = a;
        grade = g;
    }
};

// inheritance 
class HighschoolStudent : public Student{
    protected :
    string high_school_name;

    public :

    HighschoolStudent(string sn,string n, int a, char g) : Student(n, a, g){
        high_school_name = sn;
    }

    void show(void){
        cout << "**** STUDENT INFORMATION ****" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Grade : " << grade << endl;
        cout << "High School Name : " << high_school_name << endl;
    }
};

int main(){

    // creating an object or instance of the child class
    HighschoolStudent v("ICMS, Pandharpur","Vijay Prabhakar Nagane", 20, 'A');

    // showing information
    v.show();
    
    return 0;
}