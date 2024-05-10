// C++ program to create file and write 
#include<iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream myfile;
    myfile.open("my.txt", ios::app);

    for(int i=0; i<8; i++){
        myfile << i*i << endl;
    }

    myfile << 9*9;
    return 0;
}