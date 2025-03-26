#include<iostream>
#include<string>

using namespace std;

int main(){
    string var1="", var2="";
    cout << "Enter a String : ";
    getline(cin, var1);

    cout << "Enter another String : ";
    getline(cin, var2);

    if(var1.compare(var2) == 0){
        cout << "Both the strings are same.";
    }else{
        cout << "not Same string.";
    }
    return 0;
}