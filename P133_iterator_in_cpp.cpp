// C++ program to demonstrate the iterator
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    // defining a vector 
    vector<int> arr_vec{3, 6, 9, 1, 19, 11, 12, 4, 2};

    cout << "The unsorted vector : ";

    for(int i=0; i<arr_vec.size(); i++){
        cout << arr_vec[i] << " ";
    }

    // sorting the vectore 
    sort(arr_vec.begin(), arr_vec.end());

    cout << "Sorted array : ";
    for(int i=0; i<arr_vec.size(); i++){
        cout << arr_vec[i] << " ";
    }

    return 0;
}