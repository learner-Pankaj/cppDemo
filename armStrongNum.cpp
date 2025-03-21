#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int num){
    int count = 0;
    while(num > 0){
        count++;
        num /= 10;
    }
    cout << "digit count :: " << count << endl;
    return count;
}

bool isArmstrong(int num){
    int originalNum = num;
    int sum = 0;
    int digits = countDigit(num);
    while(num > 0){
        int digit = num % 10;
        sum += pow(digit, digits);
        cout << "SUM :: " << sum << endl;
        num /= 10; 
    }
    cout << "number :: " << sum << endl;
    return (sum==originalNum);
}

int main(){
    int num;
    cout << "Enter a number to check Armstrong Number :: ";
    cin >> num;
    if (isArmstrong(num)){
        cout << num << " is an Armstrong Number.\n";
    }else{
        cout << num << " is not an Armstrong Number.\n";
    }
    return 0;
}