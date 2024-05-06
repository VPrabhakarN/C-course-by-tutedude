// Q.3) write a program to calculate area of rectangle and triangle by using abstract class

#include<iostream>

using namespace std;

//defining an abstract class
class Shape{
    public :

    virtual void area() = 0;  
};

// inheritance
class Rectangle : public Shape{
    private :
    int length;
    int breath;
    int area_of_rect;

    public :

    Rectangle(int l, int b){
        length = l;
        breath = b;
    }

    // overriding
    void area(){
        area_of_rect = length * breath;
        cout << "Area of the Rectangle : " << area_of_rect << endl;
    }
};

// inheritance
class Triangle : public Shape {
    private : 
    int length;
    int breath;
    int area_of_tri;

    public :

    // defining constructor
    Triangle(int l, int b){
        length = l;
        breath = b;
    }

    // method overloading
    void area(){
        area_of_tri = 1/2 * (length * breath);
        cout << "Area of triangle : " << area_of_tri << endl;
    }
};

int main(){

    // creating object of Rectangle class
    Rectangle a(3,4);

    // calculating area of the rectangle
    a.area();

    // creating object of the triangle
    Triangle b(4,2);

    // calculating the area of the triangle
    b.area();

    return 0;
}