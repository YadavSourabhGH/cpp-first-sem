// 8. Write a program to reverse the elements of an array. For example, if the array is
// {1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1}

#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int rev_arr[5]={};
    int rev_num=4;
    for(int i = 0;i<5;i++){
        rev_arr[i]=arr[rev_num];
        rev_num--;
    }
    for(int i = 0;i<5;i++){
        cout<<rev_arr[i]<<endl;
    }
return 0;
}