#include <iostream>
#include <string>
using namespace std;


// int matrixadd(){
//     int matrix1[2][2];
//     // ={
//     //     {1,1},
//     //     {2,2}
//     // };
//     int matrix2[2][2];
//     // ={
//     //     {3,3},
//     //     {4,5}
//     // };
//     int result[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<"Enter Value For Matrix1 ("<<i<<","<<j<<"): ";
//             cin>>matrix1[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<"Enter Value For Matrix2 ("<<i<<","<<j<<"): ";
//             cin>>matrix2[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             result[i][j]=matrix1[i][j]+matrix2[i][j];
//         }
//     }
//     cout<<"Addition:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<result[i][j]<<" , ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // reverse the string
// int reversestr(){
//     string str, reverse;
//     cout<<"Enter String: ";
//     getline(cin,str);
//     cout<<str.length()<<endl;
//     for(int i=str.length()-1; i>=0 ; i--){
//         reverse+=str[i];
//     }
//     cout<<reverse<<endl;
//     return 0;
// }


// // // swap 2 var using pointer

// void swapnum(int &a, int &b) {
//     int temp = a; 
//     a = b;
//     b = temp;
// }

// int main() {
//     int num1, num2;

//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << "Before swapping: " << endl;
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     swapnum(num1, num2);

//     cout << "After swapping: " << endl;
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }





// // Function to swap two numbers using references
// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int num1 = 5;
//     int num2 = 10;

//     cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

//     swap(num1, num2);

//     cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }