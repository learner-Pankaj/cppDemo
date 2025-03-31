#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        float height;
    
    public:
        //default constructor
        Person(){
            name = "Null";
            age = 0;
            height = 0.0f;
        }

        //Parametrized constructor
        Person(string name_a, int age_a, float height_a){
            name = name_a;
            age = age_a;
            height = height_a;
        }

        //copy constructor
        Person(Person &obj){
            name = obj.name;
            age = obj.age;
            height = obj.height;
        }
        void getData(){
            cout << endl << "Name : " << name;
            cout << endl << "Age : " << age;
            cout << endl << "Height : " << height;
        }

};

int main(){
    Person pObj, pObj2("Pankaj", 24, 167.9), pObj3(pObj2);
    cout << "\n\n***** Default Constructor *****";
    pObj.getData();
    cout << "\n\n***** Parametrized Constructor *****";
    pObj2.getData();
    cout << "\n\n***** Copy Constructor *****";
    pObj3.getData();
    return 0;
}