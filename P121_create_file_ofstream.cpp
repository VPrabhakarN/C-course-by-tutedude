// C++ program to create an open new file
#include<iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myfile;
    myfile.open("my.txt");
    cout << "Hello" << endl;
    myfile << "hello";
    myfile.close();

    return 0;
}