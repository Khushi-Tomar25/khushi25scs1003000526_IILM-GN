#include <iostream>
#include <string>
using namespace std;
class Bank{
 string name;
 string acc_type;
 int acc_number;
 float balance;
 public:
    Bank(string n,string t,int num,float bal){
      name=n;
      acc_type=t;
      acc_number=num;
      balance=bal;
    }
    void deposit(int amount){
        if(amount>0){
            cout<<"Deposit amount:"<<amount<<endl;
            balance +=amount;
            cout<<"Current balance :"<<balance<<endl;
        }
        else{
            cout<<"Invalid deposit"<<endl;
        }
    }
    void withdraw(int amount){
        if(amount>0){
            cout<<"withdraw amount:"<<amount<<endl;
            balance -=amount;
            cout<<"Current balance :"<<balance<<endl;
        }
        else{
            cout<<"Invalid amount";
        }
    }
    void dis(){
        cout<<"Name of Account holder:  "<<name<<endl;
        cout<<"Account type:  "<<acc_type<<endl;
        cout<<"Account number:  "<<acc_number<<endl;
        cout<<"Account balance:  "<<balance<<endl;
     }
};
int main(){
    Bank v1("Lisa","saving",4567089,6500.80);
    v1.dis();
    v1.deposit(500);
    v1.withdraw(200);
    
}