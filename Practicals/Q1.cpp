#include <iostream>
using namespace std;

// 6. Write a C++ program to input 5 integers from the user into an array and find the
// largest number in the array 

int main(){
    int nums[5]={};
    for(int i = 0;i<5;i++){
        cout<<"Enter Number ("<<i+1<<"): ";
        cin>>nums[i];
    }
    int greatest=0;
    for(int i = 0;i<5;i++){
        if(nums[i]>=greatest){
            greatest=nums[i];
        }
    }
    cout<<"Greatest Number Among All 5: "<<greatest<<endl;
    return 0;
}