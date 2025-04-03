#include<iostream>
using namespace std;

class Example{
private:    
    int a;
public:
    Example(int val){
        a = val;
    }
    friend void setData(Example obj);
};

void setData(Example obj){
    cout << "Accessing private variable using friend function : " << obj.a << endl;
}

int main(){
    Example obj(20);
    setData(obj);
    return 0;
}