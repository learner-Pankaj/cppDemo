#include<iostream>
#include<string>

using namespace std;

struct person{
    string name;
    int age;
    float height;
    double salary;
};

int main(){
    person pVar;
    pVar.name = "Pankaj";
    pVar.age = 28;
    pVar.height = 170;
    pVar.salary = 980000;

    cout << "Details of the Person.\n";
    cout << "Name : "<<pVar.name << endl;
    cout << "Age : "<<pVar.age << endl;
    cout << "Height : "<<pVar.height << endl;
    cout << "Salary : "<<pVar.salary << endl;
    return 0;
}

