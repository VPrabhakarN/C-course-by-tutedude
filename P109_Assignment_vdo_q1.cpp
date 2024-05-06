/* Q -> Write a class to store data of students in a college.
Implement multiple types of Contructors. Implement 
Destructor and use Static data members or function to issue a Roll No to every Student Class Object. */

#include<iostream>
using namespace std;

// defining the class
class CollegeStudent {
    private :
    string name;
    int roll_no;
    int age;
    string department;
    static int total;

    public :
    // defining constructor 
    CollegeStudent(){
        name = "";
        age = 0;
        department = "";
        total++;
        roll_no = total;
    }

    // defining parameterized constructor
    CollegeStudent(string n, int a, string d){
        name = n; 
        age = a;
        department = d;
        total++;
        roll_no = total;
    }

    // defining destructor 
    ~CollegeStudent(){
        total--;
    }

    void setData(string n, int a, string d){
        name = n;
        age = a;
        department = d;
    }

    void printData(){
        cout << "STUDENT RECORD" << endl;
        cout << "NAME : " << name << endl;
        cout << "ROLL NO : " << roll_no << endl;
        cout << "DEPARTMENT : " << department << endl;
        cout << "Age : " << age << endl;
    }
};
int CollegeStudent::total = 0;

int main(){

    // creating instance of the class
    CollegeStudent a, b, c, d, e, f;
    CollegeStudent g("Rohit", 18, "Computer science");
    g.printData();

    return 0;
}