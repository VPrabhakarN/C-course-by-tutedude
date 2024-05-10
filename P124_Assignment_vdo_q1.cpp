/* Write a class to store data of students in a college.
Then store all the objects values/data into an external text file.*/
#include<iostream>
#include<fstream>
using namespace std;

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
    CollegeStudent(string n, int a, string d){
        name = n;
        age = a;
        department = d;
        total++;
        roll_no = total;
    }
    ~CollegeStudent(){
        total--;
    }
    void setData(string n, int a, string d){
        name = n;
        age = a;
        department = d;
    }

    void printdata(){
        cout << "STUDENT RECORD" << endl;
        cout <<  "NAME : " << name << endl;
        cout << "ROLL NO : " << roll_no << endl;
        cout << "DEPARTMENT : " << department << endl;
        cout << "AGE : " << age << endl;
    }

    friend ofstream & operator << (ofstream, CollegeStudent);
};

int main(){
    CollegeStudent a, b, c, d, e, f;
    CollegeStudent g("Rohit", 18, "Computer Science");
    ofstream my_file;
    my_file.open("my.text", ios::app);
    my_file << a << b << c << d << e << f << g;
    my_file.close();

    return 0;
}

ofstream & operator << (ofstream out, CollegeStudent obj){
    cout << "___" << endl;
    cout << "Name : " << obj.name << endl;
    cout << "Roll no : " << obj.roll_no << endl;
    cout << "Age : " << obj.age << endl;
    cout << "Department : " << obj.department << endl;
    return out;
}