// Q.2) Create a Calculator using the switch Statement.

#include<iostream> 

using namespace std;

int main()
{
    int a, b;
    
    // taking input from the user 
    cout << "Enter the value of A : " ;
    cin >> a;
    cout << "Enter the value of B : " ;
    cin >> b;

    // Giving choices to the user as calculator provides 
    cout << "*****Calculator*****" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Mod" << endl;
    cout << "6. Increment" << endl;
    cout << "7. Decrement" << endl;

    // taking choice from the user 
    int ch;
    cout << "Enter yout choice : ";
    cin >> ch;

    // using switch case
    switch(ch)
    {
        case 1 : 
                cout << "Addition : " << a+b << endl;
                break;

        case 2 : 
                cout << "Subtraction : " << a-b << endl;
                break;

        case 3 : 
                cout << "Multiplication : " << a*b << endl;
                break;

        case 4 : 
                cout << "Division : " << a/b << endl;
                break;

        case 5 : 
                cout << "Mod : " << a%b << endl;
                break;
                
        case 6 : 
                a++;
                b++;
                cout << "Increment of A : " << a << endl << "Increment of B : " << b << endl;
                break;

        case 7 : 
                a--;
                b--;
                cout << "Decrement of A : " << a << endl << "Decrement of B : " << b << endl;
                break;

        default : 
                 cout << "ERROR -> Please Enter valid choice....!";
                 break;            
    } 
    return 0;
}