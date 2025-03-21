#include<iostream>
using namespace std;

int factorial(int num){
    if(num == 0)
        return 1;
    else
        return num*factorial(num-1);
}

int main(){
    int num;
    cout << "Enter a Number :: ";
    cin >> num;
    int fact = factorial(num);
    cout << "Factorial of "<< num << " is "<<fact << endl;
    return 0;
}