#include<iostream>
#include<string>
using namespace std;


struct student{
    int roll_no;
    string name;
    int percentage;
};

int main(){
    student stud[3];
    int i = 0 ;
    for(i=0; i<3; i++){
        cout << "Enter Roll Number : ";
        cin >> stud[i].roll_no;

        cin.ignore();
        cout << "Enter Name : ";
        getline(cin, stud[i].name);

        cout << "Enter Percentage : ";
        cin >> stud[i].percentage;
    }

    for(i=0; i<3; i++){
        cout << "\nStudents Details\n";
        cout << "Roll No. - "<< stud[i].roll_no << endl;
        cout << "Name - "<< stud[i].name << endl;
        cout << "Percentage - "<< stud[i].percentage << endl;
    }
    return 0;
}