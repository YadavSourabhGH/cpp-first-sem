// 10.Write a program to input 8 numbers into an array and count how many of them are
// even and how many are odd.

#include <iostream>
using namespace std;

int main(){
    int arr[8]={};
    int evens,odds=0;
    for(int i = 0;i<8;i++){
        cout<<"Enter Number ("<<i+1<<"): ";
        cin>>arr[i];
        if(arr[i]%2==0){
            evens+=1;
        }
        else{
            odds+=1;
        }
    }

    cout<<"Evens: "<<evens<<endl;
    cout<<"Odds: "<<odds<<endl;
    return 0; 
}