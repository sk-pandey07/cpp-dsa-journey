#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter marks:";
    cin >> marks;

    if(marks >= 90){
        cout << "Grade A";
    }
    else if(marks > 80 && marks < 90){
        cout << "Grade B";
    }
    else if(marks > 60 && marks < 80){
        cout << "Grade C";
    }
    else{
        cout << "Fail";
    }

    return 0;
}
