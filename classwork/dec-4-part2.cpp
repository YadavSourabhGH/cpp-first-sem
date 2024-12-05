#include <iostream>
using namespace std;

// int main(){
//     int x = 10;
//     int *ptr = &x;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
// }


int main(){
    int a[3]={1,2,3};
    int *ptr=a;
    // int *ptr=&a;
    cout<<"1st value : "<<*ptr<<endl;
    cout<<"2nd value : "<<*(ptr+1)<<endl;
    cout<<"2nd value : "<<*(ptr+2)<<endl;
}