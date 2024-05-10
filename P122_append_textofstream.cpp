// C++ program to append the text 
#include<iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("my.txt", ios::app);
    cout << "Hello" << endl;
    myfile << "Vijay";
    myfile.close();

    return 0;
}