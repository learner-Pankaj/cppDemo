#include<iostream>
#include<string>

using namespace std;

int main(){
    string var1 = "";
    cout << "Enter a String : ";
    getline(cin, var1);
    int len = var1.length();
    int len1 = var1.size();
    cout << endl << "Length of the string is : (length)" << len <<" (size)" << len1 << endl;

    for(int i=len; i>=0; i--){
        cout << var1[i];
    }
    return 0;
}