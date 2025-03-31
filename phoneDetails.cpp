#include<iostream>
#include<string>
using namespace std;

class Phone{
    private:
        string name;
        int ram;
        string processor;
        float battery;
    
    public:
        Phone(string name_a="Null", int ram_a=0, string processor_a="Null", float battery_a=0.0f){
            name = name_a;
            ram = ram_a;
            processor = processor_a;
            battery = battery_a;
        }

        void getPhoneDetails(){
            cout << "Phone Name : " << name << endl;
            cout << "RAM : " << ram <<"GB"<<endl;
            cout << "Processor : " << processor << endl;
            cout << "Battery : " << battery << endl;
        }
};

int main(){
    Phone pObj("Samsung", 8, "Exynos", 72.5);
    pObj.getPhoneDetails();
    return 0;
}