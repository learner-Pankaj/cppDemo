#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,34,66,89,45,23,98,34,66,34,56,34,79,46,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    int maxOcc=0, count = 1, maxcount=0;
    cout << "Length of the array is = " << len << endl;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count > maxcount){
            maxcount = count;
            maxOcc = arr[i];
        }
        count = 1;
    }

    cout << "Maximum occurring element = " << maxOcc << endl;
    cout << "Number of time element occurred = " << maxcount << endl;
    return 0;
}