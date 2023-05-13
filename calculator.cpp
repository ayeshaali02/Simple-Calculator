#include<iostream>
using namespace std;
int main(){
    int op,a,b;
    cout << "Enter the operator and the two numbers: ";
    cin >> op >> a >> b;
    switch(op){
        case 1:
            cout << a+b;
            break;
        case 2:
            cout << a-b;
            break;
        case 3:
            cout << a/b;
            break;
        case 4:
            cout << a*b;
            break;
        default:
            cout << "Invalid Operator";

    }

    return 0;
}