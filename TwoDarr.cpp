#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    
    //input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "Row is " << i << " column is " << j  << " Enter the value : ";
            cin >> arr[i][j];
        }
    }

    //output
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            // cout << "Row is " << i << " column is " << j  << " Enter the value : ";
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    //sum of the 2D array
    int sum = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }
    cout << "The sum of the 2D Array is = " << sum << endl;
    return 0;
}