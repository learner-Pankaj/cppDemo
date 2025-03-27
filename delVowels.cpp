//Write a program to delete all the vowels from the string
#include<iostream>
#include<string>

using namespace std;

int main(){
    string var="";
    cout << "Enter a string : ";
    getline(cin, var);

    for(int i=0; i<var.size(); i++){
        if(var[i]=='a'||var[i]=='e'||var[i]=='i'||var[i]=='o'||var[i]=='u'||var[i]=='A'||var[i]=='E'||var[i]=='I'||var[i]=='O'||var[i]=='U'){
            var[i]=' ';
        }
    }
    cout << endl << var << endl;
    return 0;
}