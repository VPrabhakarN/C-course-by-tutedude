// Q.1) -> Write a program to store Name Class and age of student in a text file 
#include<iostream>
#include<fstream>

using namespace std;

class Student{
    private :
    string name;
    string class_name;
    int age;

    public :

    // defining the constructor 
    Student(string n, string c, int a){
        name = n;
        class_name = c;
        age = a;
    }

    // method to display the data
    void display(void){
        cout << "STUDENT DATA" << endl;
        cout << "Name : " << name << endl;
        cout << "Class name : " << class_name << endl;
        cout << "Age : " << age << endl;
    }
}

int main(){
    Student a("Vijay", "BCA3", 21);
    Student b("Tejas", "BCA3", 21);
    Student c("Rushi", "BCA3", 21);
    Student d("Rohan", "BCA3", 21);
    Student e("Kunal", "BCA3", 21);
    Student f("Prathmesh", "BCA3", 21);
    Student g("Yash", "BCA3", 21);

    // creating object of file
    ofstream my_file;
    
    my_file.open("student.text", ios::app);
    my_file << a << b << c << d << e << f << g;
    my_file.close();

    // displaying the data 
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    f.display();
    g.display();

    return 0;
}