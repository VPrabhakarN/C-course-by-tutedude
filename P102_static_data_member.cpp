// C++ program to define the static data member

#include<iostream>

using namespace std;

// defining a class 
class Rectangle {
    private :
    int length;
    int breadth;
    int area;

    public :
    static int count;

    Rectangle(){
        length = 0;
        breadth = 0;
        area = 0;
        count++;
    }

    void setValues(int l, int b){
        length = l;
        breadth = b;
        area = length*breadth;
    }

    void total_area(void){
        cout << "Area of the rectangle : " << area << endl;
    }
};

// initializing the values to static member 
int Rectangle :: count = 0;

int main(){

    // Creating instances of the class rectangle 
    Rectangle a, b, c;

    // Counting the area of the rectangle 
    a.setValues(3,4);
    b.setValues(2,7);
    c.setValues(5,6);

    // displaying the values of areas of the reactangle 
    a.total_area();
    b.total_area();
    c.total_area();

    // let's define the number of objects are created while the exwcution was being executed
    // here as we defined 'count' data member will give us information
    cout << "Count : " << Rectangle::count << endl;

    return 0;
}