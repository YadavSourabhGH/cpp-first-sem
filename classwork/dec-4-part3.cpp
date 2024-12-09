#include <iostream>
using namespace std;

// // declare the class 
// class wall{
//     private:
//     int a;

//     public:
//     // deafult constructor 
//     wall(){
//         cout<<"Creating a wall, please enter value of a: ";
//         cin>>a;
//         cout<<"a: "<<a;
//     }
// };

// int main(){
//     wall d;

// }



// // parametraised constructor 
// class demo{
//     private:
//     int a;

//     public:
//     demo(int a){
//         cout<<"VALUE: "<<a<<endl;
//     }
// };

// int main(){
//     demo d(10);
// }



// copy constrctor 
class demo{
private:
int num1,num2;
public:
demo(int a, int b){
num1=a;
num2=b;
}
int addition(){
    return num1+num2;
}
};

int main(){
    demo demo1(10,12);
    cout<<"Addititon of demo1: "<<demo1.addition()<<endl;
    demo demo2=demo1;
    cout<<"Addititon of demo2: "<<demo2.addition()<<endl;
}