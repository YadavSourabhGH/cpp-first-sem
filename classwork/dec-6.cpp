#include <iostream>
using namespace std;

class demo{
    public:
    // constrctor 
    demo(){
        cout<<"Object created"<<endl;
    }
    // destructor 
    ~demo(){
        cout<<"Object Deleted"<<endl;
    }
    int num(){
        return 10;
    }
};

int main(){
    demo d;
    demo d2;
    cout<<"Some code here"<<endl;
    
    // cout<<d2.num()<<endl;
    cout<<"Manually removing the d2 object"<<endl;
    cout<<"program end"<<endl;
}