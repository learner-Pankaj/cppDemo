#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    int num = 10;
    ptr = &num;
    cout << ptr << endl;    //pointer address
    cout << (*ptr)<< endl;  //pointer pointing value
    return 0;
}