#include<iostream>
#include<string>

using namespace std;

int main(){
    string var1="", var2="";
    string temp = "";
    cout << "Enter a String : ";
    getline(cin, var1);

    cout << "Enter another String : ";
    getline(cin, var2);

    cout << "\nBefore swapping Strings\n";
    cout << "!st string : "<< var1 << "\n2nd string : "<<var2 <<endl;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "\nAfter swapping Strings\n";
    cout << "!st string : "<< var1 << "\n 2nd string : "<<var2 <<endl;

    return 0;
}