#include <iostream>
using namespace std;
// 1.A simple program to check if a number is positive, negative, or zero
// int main(){
//     float i;
//     cout<<"Enter a Number : ";
//     cin>>i;
//     if(i>0){cout<<"Positive";}
//     else if(i==0){cout<<"Zero";}
//     else if(i<0){cout<<"Negative";}
//     else{cout<<"Invalid Num";}
//     return 0;
// }

// 2.A program that checks if a number is even or odd.
// int main(){
//     int n;
//     cout<<"Enter a Number : ";
//     cin>>n;
//     if(n%2==0){cout<<"Even Number"<<endl;}
//     else{cout<<"Odd Number"<<endl;}
//     return 0;
// }

// 4.A program that displays the name of the day based on the number entered by the user    (1 for Monday, 2 for Tuesday, etc.).

// int main(){
//     int day;
//     cout<<"Enter a Number for day of a week: ";
//     cin>>day;
//     switch (day)
//     {
//     case 1:
//         cout<<"Monday"<<endl;
//         break;
//     case 2:
//         cout<<"Tuesday"<<endl;
//         break;
//     case 3:
//         cout<<"Wednesday"<<endl;
//         break;
//     case 4:
//         cout<<"Thusday"<<endl;
//         break;
//     case 5:
//         cout<<"Friday"<<endl;
//         break;
//     case 6:
//         cout<<"Saturday"<<endl;
//         break;
//     case 7:
//         cout<<"sunday"<<endl;
//         break;
//     default:
//         break;
//     }
// }

// 5.A simple grading system using switch to select the grade based on marks.

// int main(){
// int mark;
// bool flag = true;
//     cout<<"Enter the marks: ";
//     cin>>mark;

// switch (mark / 10) { 
//         case 10: 
//         case 9: 
//         case 8: 
//             cout << "Grade: A" << endl;
//             break;

//         case 7: 
//         case 6: 
//         case 5:
//             cout << "Grade: B" << endl;
//             break;

//         case 4: 
//         case 3: 
//             cout << "Grade: C" << endl;
//             break;
//         case 2:
//         case 1:
//         case 0:
//             cout << "FAIL!" << endl;
//             break;

// default:
//     break;
// }
// }

// 6.A program that uses if and else statements to find the largest of three numbers.

// int main(){
//     float a,b,c;
//     cout<<"Enter first Number : ";
//     cin>>a;
//     cout<<"Enter second Number : ";
//     cin>>b;
//     cout<<"Enter third Number : ";
//     cin>>c;
//     if(a>=b and a>=c){cout<<a<<" Is Greatest"<<endl;}
//     else if(b>=a and b>=c){cout<<b<<" Is Greatest"<<endl;}
//     else if(c>=a and c>=b){cout<<c<<" Is Greatest"<<endl;}
// return 0;
// }

// 7.A program to check whether a given year is a leap year.

// int main(){
//     int year;
//     bool isleap;
//     cout<<"Enter year : ";
//     cin>>year;
//     isleap = (year%4==0) ? true:false;
//     if(isleap){cout<<"Its Leap Year"<<endl;}
//     else{cout<<"Its Not A Leap Year"<<endl;}
// }