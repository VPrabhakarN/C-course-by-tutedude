// C++ program to define vector
#include<iostream>
using namespace std;

int main(){

    // vector 
    vactor<int> arr_vec; // size - 0, {}

    // push
    int temp;
    cin >> temp;
    arr_vec.push_back(temp); // size - 1 {temp}
    cin >> temp;
    arr_vec.push_back(temp); // size - 2 {temp, temp}
    arr_vec.push_back(1); // size - 3 {temp, temp, 1}
    arr_vec.push_back(2); // size - 4 {temp, temp, 1, 2}
    arr_vec.pop_back(); // size - 3 {temp, temp, 1}
}