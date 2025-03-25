#include<iostream>
using namespace std;

int main(){
    int arr[] = {23,46,79,58,56,67,72,26};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Even number in the array.\n";
    for(int i=0; i<len; i++){
        if(arr[i]%2==0){
            cout<<arr[i] << ", ";
        }
    }
    return 0;
}