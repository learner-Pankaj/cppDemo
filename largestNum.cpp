//find largest number from given array

#include<iostream>
using namespace std;

int largestNumber(int n[], int len){
    int largest = n[0];
    for(int i=1; i<len; i++){
        if(n[i]>largest){
            largest = n[i];
        }
    }
    return largest;
}

int largest3Num(int n[], int len){
    int
}
int main(){
    int arr[] = {34,12,65,22,14,54,75,37};
    int length = sizeof(arr)/sizeof(arr[0]);
    int largestNum = largestNumber(arr, length);
    cout << "Largest number in given array "<< largestNum << endl;
    return 0;
}
