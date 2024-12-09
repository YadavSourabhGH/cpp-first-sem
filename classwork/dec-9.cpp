#include <iostream>
using namespace std;


// single inheritence
// class demo1{
// // protected:
// public:
// int a;
// void getdata(){
//     cout<<"Enter Num for a: ";
//     cin>>a;
// }
// };

// class demo2:public demo1{
//     public:
//     void display(){
//         // getdata();
//         cout<<"Value of a: "<<a<<endl;
//     }
// };

// int main(){
//     demo2 d;
//     d.getdata();
//     d.display();
// }




// // multilevel inhertence 

// class demo1{
//     public:
//     int a;
//     void getdata(){
//         cout<<"Enter the value: ";
//         cin>>a;
//     }
// };
// class getsquare:public demo1{
//     public:
//     int square;
//     void makesquare(){
//     square = a*a;
//     }
// };
// class demo2:public getsquare{
//     public:
//     void program(){
//     getdata();
//     makesquare();
//     cout<<"Square of "<<a<<" is "<<square<<endl;
//     }
// };

// int main(){
//     demo2 d;
//     d.program();
//     return 0;
// }



// // multilevel inheritence 
// class demo1{
//     public:
//     int a,b;
//     void num1(){
//         cout<<"Enter Value Of a: ";
//         cin>>a;
//     }
// };

// class demo2:public demo1{
//     public:
//     void num2(){
//         cout<<"Enter Value Of b: ";
//         cin>>b;
//     }
// };

// class demo3:public demo2{
//     public:
//     int add;
//     void adder(){
//         add=a+b;
//     }
// };
// class demo4:public demo3{
//     public:
//     void printer(){
//         num1();
//         num2();
//         adder();
//         cout<<"Addition of "<<a<<" and "<<b<<" is "<<add<<endl;
//     }
// };

// int main(){
//     demo4 d;
//     d.printer();
//     return 0;
// }





// hierarchial inheritance


// class A
// { 
// public: 
// void show_A() { 
// 	cout<<"class A"<<endl; 
// } 
// }; 
// class B : public A
// { 
// public: 
// void show_B() { 
// 	cout<<"class B"<<endl; 
// } 
// }; 

// class C : public A 
// { 
// public: 
// void show_C() { 
// 	cout<<"class C"<<endl; 
// } 
// }; 

// int main() { 
// B b; 
// cout<<"calling from B: "<<endl; 
// b.show_B(); 
// b.show_A(); 
	
// C c;
// cout<<"calling from C: "<<endl; 
// c.show_C(); 
// c.show_A(); 
// return 0; 
// } 





// multiple inheritence 

class Input {
public:
    int a, b, c;

    void getInputs() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
    }
};


class Display {
public:
    void showResult(int result) {
        cout << "Addition of the three numbers: " << result << endl;
    }
};


class Calculator : public Input, public Display {
public:
    int result;

    void add() {
        result = a + b + c;
    }
};

int main() {
    Calculator calc;

    calc.getInputs();      
    calc.add();           
    calc.showResult(calc.result); 

    return 0;
}