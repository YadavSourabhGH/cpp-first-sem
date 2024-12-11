#include <iostream>
using namespace std;

// 7. Write a program to declare an array of size 10, initialize it
// with the first 10 natural
// numbers, and print each element on a new line.

int main(){
    int natural_nums[10]={};
    for(int i = 1;i<=10;i++){
        natural_nums[i-1]=i;
    }
    for(int i = 1;i<=10;i++){
        cout<<natural_nums[i-1]<<endl;
    }
    return 0;
}