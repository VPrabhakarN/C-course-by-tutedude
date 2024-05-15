/* Q -> Given : A number is called pretty if
        it's last digit is 2, 3 or 9. Write a program that prints all the "pretty numbers" between two input numbers L (left) and R (right), such that any pretty number lies in the open range (L, R). (Implement STL Vector)
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int l, r;
    cout << "Enter values of bound L & R : " << endl;
    cin >> l >> r ;
    int temp = 0;
    for(int i=l+1; i < r; i++){
        temp = i%10;
        if(temp == 2 || temp == 3 || temp == 9){
            arr.push_back(i);
        }
        else{
            continue;
        }
    }

    cout << "Printing all the 'pretty values' between " << l << " and " << r << endl;
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}