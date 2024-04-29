#include<iostream>

using namespace std;

// defining a class 
class Employee{
private:
    string name;
    string phone_no;
    string job_post;
    int age;

public: 
    friend ostream & operator <<(ostream &out, const Employee &c);
    friend istream & operator >>(istream &in, Employee &c);
    void operator =(const Employee &c);
};

int main(){

    Employee a, b;
    cin >> a;
    cout << a;
    b = a;
    cout << b;

    return 0;
}

// FOR OUTPUT 
ostream & operator << (ostream &out, const Employee &c){
    out << "Employee record" << endl;
    out << "Name : " << c.name << endl;
    out << "Age : " << c.age << endl;
    out << "Phone No : " << c.phone_no << endl;
    out << "Job Post : " << c.job_post << endl;
    return out;
}

// FOR INPUT 
istream & operator >> (istream &in, Employee &c){
    cout << "Enter the name of employee : " ;
    in >> c.name;
    cout << "Enter the age of employee : ";
    in >> c.age;
    cout << "Enter Phone number of the employee : ";
    in >> c.phone_no;
    cout << "Enter the job post of the employee : ";
    in >> c.job_post;
    return in;
}

// FOR COPYING
void Employee::operator =(const Employee &b){
    // we get object b
    // let's say we want to do a = b (where a is the 
    // object that called the operator)
    name = b.name;
    age = b.age;
    phone_no = b.phone_no;
    job_post = b.job_post;
}
