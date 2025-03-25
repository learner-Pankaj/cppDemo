#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,23,58,85,25,89,87,46};
    int len = sizeof(arr)/sizeof(arr[0]);
    int first = arr[0];
    int second = 0; 
    for(int i=1; i<len; i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }else if(arr[i]>second){
            second = arr[i];
        }
    }
    cout << "Second largest value in the array is " << second << endl;
    return 0;
}