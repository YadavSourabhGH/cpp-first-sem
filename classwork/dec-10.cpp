#include <iostream>
using namespace std;

#include<iostream>
 
using namespace std;

//function overlooading
// class demo{

//     public:
//     void addition(int a,int b)//formal parameter
//     {
//         int c=a*b;
//         cout<<"addition is: "<<c<<endl;


//     }
//     void addition(int a,int b,int c){


//         int z=a+b+c;
//         cout<<"addition is: "<<z;
//     }
// };
// int main()
// {
//     demo d;
//     d.addition(10,20);
//     //arguments actual parameters
//     d.addition(10,20,30);
//     return 0;
// }

//function overriding(scope function)
// class base{
//     public:
//     void display()
//     {
//         cout<<"Base class"<<endl;
//     }
// };
// class derived :public base 
// {
//     public:
//     void display(){
//         cout<<"derived class"<<endl;
//     }
// };
// int main()
// {
//     derived obj;
//     obj.display();
//     obj.base::display();
// }

// virtual function
// class base{
//     public:
//     void display(){
//         cout<<"Base class"<<endl;
//     }
// };

// class derived:public base{
//     public:
//     void display(){
//         cout<<"Derived class"<<endl;
//     }
// };

// int main() {
//     base *ptr;
//     derived obj;
//     ptr=&obj;
//     ptr->display();
//     obj.display();
    

//    return 0; 
// }

// // inline function

// inline void displayNum(int num){
//     cout<<num<<endl;
// }
// int main(){

//     displayNum(5);
//     displayNum(8);
//     displayNum(666);
// }



// int sum(int k)
// {
//     if (k > 0)
//     {
//         return k + sum(k-1);
//     }
//     else
//     {
//         return 0;
//     }
// }int main()
// {
//     int result = sum(10);
//     cout<<result;
//     return 0;
// }




// class demo{
//     public:
//     int num;
//     demo(int a){
//         num=a;
//         display();
//     }
//     demo operator ++(){
//         num+=1;
//         return num;
//     }
//     void display(){
//         cout<<"value of num is "<<num<<endl;
//     }
// };
// int main() {
//     ++demo(10);
//    return 0; 
// }


// class Number{
//     private:
//     int n;

//     public:
//     void get_n(){
//         cout<<"Enter the number ";
//         cin>>n;
//     }
//     void put_n(){
//         cout<<n<<endl;
//     }

//     Number operator +(Number Y){
//         Number ans;
//         ans.n = n+Y.n;
//         return ans;
//         }
// };
// int main() {
//     Number O1,O2,O3;
//     O1.get_n();
//     O2.get_n();
//     O3=O1.operator +(O2);

//     cout<<"\n Number 1 -  ";
//     O1.put_n();

//     cout<<"\n Number 2 -  ";
//     O2.put_n();

//     cout<<"\n Addition -  ";
//     O3.put_n();
//    return 0; 
// }



// #include<iostream>
// using namespace std;
// class demo{
//     public:
//     int num;
//     demo(int a){
//         num=a;
//         display();
//     }
//     demo operator --(){
//         num-=1;
//         return num;
//     }
//     void display(){
//         cout<<"value of num is "<<num<<endl;
//     }
// };
// int main() {
//     --demo(10);
//    return 0; 
// }




class Test{
    protected:
    int x;
    public:
    Test (int i):x(i){ }
    void fun() const {
        cout<<"fun() const"<<endl;
    }
    void fun(){
        cout<<"fun()"<<endl;
    }
};

int main(){
    Test t1(10);
    const Test t2 (20);
    t1.fun();
    t2.fun();
    return 0;
}