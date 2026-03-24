#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;

    cout <<"enter num1:";
    cin >> num1;

    cout << "enter operator(+,-,*,/): ";
    cin >> op;

    cout << "enter num2:";
    cin >> num2;

    switch(op){
        case '+':
            cout << "result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "result: " << num1 * num2 << endl;
            break;

        case '/':
            if(num2 != 0){
            cout << "result: " << num1 / num2 << endl;
            }
            else{
            cout << "Eror! Division by zero";
            }

        default:
            cout << "invalid operators";


    }

    return 0;
}
