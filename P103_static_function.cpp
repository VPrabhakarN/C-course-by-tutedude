// C++ program to demonstrate the static function 

#include<iostream> 

using namespace std;

// defining a class 
class Rectangle{

    private :
    int length;
    int breadth;
    int area;

    public :
    static int count;

    static int howMuchMemory(){
        return (count*12 + 4);
    }

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

    void totalArea(void){
        cout << "Total area : " << area << endl;
    }
};

int Rectangle ::count = 0;

int main(){

    // creating instance or methods for class Rectangle 
    Rectangle a, b, c, d;

    // calculating the area of the rectangles 
    a.setValues(21, 12);
    b.setValues(23, 11);
    c.setValues(22, 10);
    d.setValues(20, 13);

    // getting the area of the rectangle 
    a.totalArea();
    b.totalArea();
    c.totalArea();
    d.totalArea();

    // get the total count of objects has been created during the execution 
    cout << "Cout of objects : " << Rectangle::count << endl;

    // getting the total memory consumed by variables during the execution
    cout << "Total memory consumed : " << Rectangle::howMuchMemory() << endl;

    return 0;
}