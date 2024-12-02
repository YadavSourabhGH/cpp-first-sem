#include <iostream>
using namespace std;

// // #simple calculator 

// int main(){
// float a,b;
// char opr;
// cout<<"Enter First Number: ";
// cin>>a;
// cout<<"Enter Second Number: ";
// cin>>b;
// cout<<"Enter Oprator (+, -, *, /):"<<endl;
// cin>>opr;

// switch (opr){
//     case '+':
//         cout<<a<<"+"<<b<<"="<<a+b<<endl;
//         break;
//     case '-':
//         cout<<a<<"-"<<b<<"="<<a-b<<endl;
//         break;
//     case '*':
//         cout<<a<<"*"<<b<<"="<<a*b<<endl;
//         break;
//     case '/':
//         cout<<a<<"/"<<b<<"="<<a/b<<endl;
//         break;
// }
// }

// // Grade Calculaor

// int main(){
//     float mark;
//     cout<<"Enter Marks: ";
//     cin>>mark;
//     if (mark>=0 && mark<=35){
//         cout<<"Fail Bro!"<<endl;
//     }
//     else if (mark>=35 && mark<=50){
//         cout<<"Grade: C"<<endl;
//     }
//     else if (mark>=60 && mark<=70){
//         cout<<"Grade: B"<<endl;
//     }
//     else if (mark>=70 && mark<=80){
//         cout<<"Grade: A"<<endl;
//     }
//     else if (mark>=80 && mark<=100){
//         cout<<"Grade: A+"<<endl;
//     }
// }

// //Calculate Factorial Number 
// int main(){
//     int num; // define var integar num
//     cout<<"Enter Number: "; // ask for num
//     cin>>num; // save the num
//     int res; 
//     for(int i=1;i<=num;i++){
//         res*=i;
//     }
//     cout<<num<<"!"<<" = "<<res<<endl;
// return 0;
// }

// // Check weather the number is prime or not 
// int main(){
//     int num;
//     bool flag=false;
//     cout<<"Enter Number: ";
//     cin>>num;
//     for (int i=2;i<num;i++){
//         if(num % i != 0){
//             flag=true;
//             cout<<flag;
//             break;
//         }
//         if (num < 2)
//             cout << num << " is NOT prime" << endl;
//     }
//     if(flag){cout<<"Its an prime number!"<<endl;}
//     else{cout<<"Its Not a prime number!"<<endl;}
//     return 0;
// }

// Reverse the number 
// int main(){
//     int num, reverse=0,remainder=0;
//     cout<<"Enter Number: ";
//     cin>>num;
//     while (num!=0){
//         remainder=num%10;
//         reverse = reverse*10 + remainder;
//         num/=10;
//     }
//     cout<<"Reversed Number= "<<reverse<<endl;
// }


// calculate sum of given number 
// int main(){
//     int num,remainder=0,res=0;
//     cout<<"Enter Number: ";
//     cin>>num;
//     while (num!=0){
//         remainder=num%10;
//         num/=10;
//         res+=remainder;
//     }
//     cout<<"Total Number= "<<res<<endl;
// }

// factorial addition 
// int main(){
//     int num; // define var integar num
//     cout<<"Enter Number: "; // ask for num
//     cin>>num; // save the num
//     int res=0; 
//     for(int i=1;i<=num;i++){
//         res+=i;
//     }
//     cout<<num<<""<<" = "<<res<<endl;
// return 0;
// }