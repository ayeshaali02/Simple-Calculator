#include<iostream>
using namespace std;
int main(){
    int op,a,b;
    cout << "Enter the operator and the two numbers: ";
    cin >> op >> a >> b;
    switch(op){
        case 1: //addition
            cout << a+b; 
            break;
        case 2: //subtraction
            cout << a-b;
            break;
        case 3: //division
            cout << a/b;
            break;
        case 4: //multiplication
            cout << a*b;
            break;
        default:
            cout << "Invalid Operator";

    }

    return 0;
}
