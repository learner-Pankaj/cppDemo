#include<iostream>
#include<string>

using namespace std;

int main(){
    string firstname, lastname, address;
    cout << "Enter firstname : " << firstname;
    cin >> firstname;
    cout << "Enter lastname : " << lastname;
    cin >> lastname;

    cin.ignore(); //clear new line left in buffer

    cout << "Enter Address : ";
    getline(cin, address);

    string fullname = firstname + " " +lastname;
    cout << "FullName : " << fullname << "\n Address : " << address << endl;

    return 0;
}