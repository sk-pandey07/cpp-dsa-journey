#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int marks[size];

    cout << "enter marks: ";
    for(int i=0; i<size; i++){
        cin >> marks[i];
    }

    for(int i=0; i<size; i++){
        cout << marks[i] << endl;
    }

    int smallest = marks[0];
    int greatest = marks[0];

    for(int i=0; i<size; i++){
        if(marks[i] < smallest){
            smallest = marks[i];
        }
        if(marks[i] > greatest){
            greatest = marks[i];
        }
    }
    cout << "smallerst mark = " << smallest << endl;
    cout << "greatest marks = " << greatest << endl;
    return 0;
}
