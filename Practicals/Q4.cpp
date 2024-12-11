// 9. Write a program to take 6 integers as input, store them in an array, and calculate
// the sum of all elements in the array.

#include <iostream>
using namespace std;

int main(){
    int arr[6]={};
    int sum=0;
    for(int i = 0;i<6;i++){
        cout<<"Enter Number ("<<i+1<<"): ";
        cin>>arr[i];
    }
    for(int i = 0;i<6;i++){
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    return 0; 
}