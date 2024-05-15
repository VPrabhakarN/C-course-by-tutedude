// C++ program to define vector
#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector 
    vector<int> arr_vec; // size - 0, {}

    // push
    int temp;

    cin >> temp; 
    arr_vec.push_back(temp); // size - 1 {temp}
    arr_vec.push_back(1); // size - 2 {temp, 1}
    arr_vec.push_back(2); // size - 3 {temp, 1, 2}
    arr_vec.pop_back(); // size - 2 {temp, 1}

    // iterating the vector
    for(int i=0; i<arr_vec.size(); i++){
        cout << arr_vec[i] << endl;
    }

    return 0;
}