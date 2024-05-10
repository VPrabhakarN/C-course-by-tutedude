// C++ program to demonstrate the template 
#include<iostream>
using namespace std;

// defining templates
template <class T, class s>
T add(T a, S b){
    return a+b;
}

int main(){
    int a = 2, b = 3;
    cout << add<int, int>(a, b) << endl;
    cout << add<float, int>(1.01, 5);

    return 0;
} 