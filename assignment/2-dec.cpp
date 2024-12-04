#include <iostream>
using namespace std;

// Check if the number is prime or not

// int main() {
//     int num;
//     bool flag = true; 
//     cout << "Enter the Number: ";
//     cin >> num;

//     if (num < 2) {
//         cout << num << " is NOT prime" << endl;
//         return 0;
//     }

//     for (int i = 2; i <= num / 2; i++) {
//         if (num % i == 0) {
//             flag = false; 
//             break;
//         }
//     }

//     if (flag) {
//         cout << "It's a prime number!" << endl;
//     } else {
//         cout << "It's NOT a prime number!" << endl;
//     }

//     return 0;
// }




// 2. check if the number is amrstrong number or not

// int main(){
//     int num, remainder=0, result=0,vnum=0,count=0,temp=0;
//     cout<<"Enter the number: ";
//     cin>>num;
//     vnum=num;
//     temp=num;
//     while(temp!=0){
//         count++;
//         temp/=10;
//     }
//     while(num!=0){
//         remainder=num%10;
//         result+=pow(remainder,count);
//         num/=10;
//     }
//     if(vnum==result){
//         cout<<"Yes The number is amrstrong number"<<endl;
//     }
//     else{cout<<"No, The number is not amrstrong number"<<endl;}
//     return 0;
// }