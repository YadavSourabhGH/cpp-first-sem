#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;
int main();
int menu();
class bank{
    protected:
    int accountNumber;
    string name;
    double balance;
    int accountPin;

    public:
    bank(){
        balance = 0;
    }
    void takeUserData(){
        cout<<"Enter Your Name: ";
        getline(cin,name);

        cout<<"Enter Account Number: ";
        cin>>accountNumber;

        cout<<"Enter Account Pin(4 digit): ";
        cin>>accountPin;

    }
    void displayUserDetails(){
        cout<<"----- User Details -----"<<endl<<"Account Name: "<<name<<endl<<"Account Number: "<<accountNumber<<endl<<"Account Balace: "<<balance<<endl<<"------------------------"<<endl<<endl;
    }
};

class AccountOperations:public bank{
    public:
    void Deposit(double amount){
        if(amount>0){
        balance+=amount;
        sleep(1);
        cout<<"Amount "<<amount<<" Is Successfully Deposit To Your Account!"<<endl<<"Thanks For Using RICH BANK OF INDIA"<<endl<<endl;
        sleep(2);
        displayUserDetails();
        sleep(2);
        menu();
        }
        else{
            cout<<"Invalid Request!"<<endl;
            menu();
        }
    }
    void Withdraw(int pin, double amount){
        if(pin == accountPin){
            if(amount>0 && amount <= balance){
                balance-=amount;
                sleep(1);
                cout<<"Amount "<<amount<<" Is Successfully Withdraw From Your Account!"<<endl<<"Thanks For Using RICH BANK OF INDIA"<<endl<<endl;
                sleep(2);
                displayUserDetails();
                sleep(2);
                menu();
            }
            else{
                sleep(1);
                cout<<"Invalid Request!"<<endl;
                menu();
            }
        }
        else{
            sleep(1);
            cout<<"Invalid PIN Entered!"<<endl;
            menu();
        }
    }
};
    AccountOperations Account;

int main(){
    cout<<"Welcome to RICH BANK OF INDIA"<<endl;
    Account.takeUserData();
    Account.displayUserDetails();
    menu();
    return 0;
}

int menu(){
int selected_option;
        sleep(1);
 cout<<"---------Bank Menu---------"<<endl<<"Options---------"<<endl<<"1. Deposit Money"<<endl<<"2. Withdraw Money"<<endl<<"Enter Option No.: ";
    cin>>selected_option;
    if(selected_option==1){
        int a=0;
        cout<<"Enter Amount To Deposit: ";
        cin>>a;
        Account.Deposit(a);
    }
    else if(selected_option==2){
        int b=0;
        int p=0;
        cout<<"Enter Pin: ";
        cin>>p;
        cout<<"Enter Amount To Withdraw: ";
        cin>>b;
        Account.Withdraw(p,b);
    }  
    else{
        cout<<"X - Invalid Input Please Select From 1, 2,  - X"<<endl<<"Redirecting To Menu..."<<endl<<endl;
        main();
    }
    return 0;
}