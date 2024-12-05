#include <iostream>
using namespace std;


// // 1st program 
// int display();

// int main(){
//     cout<<display()<<endl;
//     return 0;
// }

// int display(){
//     int x=10;
//     return x;
// }



// // 2nd program 
// void display(int a);

// int main(){
//     int x;
//     cout<<"Enter a Number: ";
//     cin>>x;
//     display(x);
// }

// void display(int a){
//     cout<<"Your Number: "<<a<<endl;
// }


// W.A.P to display string values from the user defined functions 
// int func(int a);

// int name();

// int main(){
//     name();
//     return 0;
// }

// int name(){
//     string a;
//     cout<<"Enter name: ";
//     cin>>a;
//     cout<<"Hello "<<a;
//     return 0;
// }





// callbyvalue
void callbyvalue(int a){
    int c = a + 10;
    cout<<"Value of C: "<<c<<endl;
}

// callbyreference
void callbyreference(int &a){
    a+=10;
    cout<<"Value of a: "<<a<<endl;
}

int main(){
    int x = 10;
    // call by value 
    // cout<<"Value of X: "<<x<<endl;
    // cout<<"trying call by value"<<endl;
    // callbyvalue(x);
    // cout<<"Value of X: "<<x<<endl;

    // call by reference 
    cout<<"Value of X: "<<x<<endl;
    cout<<"trying call by referance"<<endl;
    callbyreference(x);
    cout<<"Value of X: "<<x<<endl;
}