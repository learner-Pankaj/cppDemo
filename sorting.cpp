#include<iostream>
using namespace std;

int main(){
    //sort the array in descending order
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int j=0; j<len; j++){
        for(int i=0; i<len; i++){
            if(arr[i]<arr[i+1]){
                int temp = 0;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i=0; i<len; i++){
        cout << arr[i] << ", ";
    }
    return 0;
}