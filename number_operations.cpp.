#include <iostream>
using namespace std;
 class ABC {
     int a;
     int b;
     public:
     ABC (){
         a=1;
         b=1;
     }
      ABC (int x,int y){
          a=x;
          b=y;
      }
      void print(){
         cout<<a<<" "<<b;
      } 
      friend ABC operator +(ABC,ABC),
                 operator -(ABC,ABC),
                 operator *(ABC,ABC);
 };
 
 ABC operator +(ABC K1,ABC K2){
     ABC K3;
     K3.a=K1.a+K2.a;
     K3.b= K1.b+K2.b;
     return K3;
 }
 ABC operator -(ABC K1,ABC K2){
     ABC K3;
     K3.a=K1.a-K2.a;
     K3.b= K1.b-K2.b;
     return K3;
 }
 ABC operator *(ABC K1,ABC K2){
     ABC K3;
     K3.a=K1.a*K2.a;
     K3.b= K1.b*K2.b;
     return K3;
     
 }
 int main (){
     cout <<"fixed value of a and b"<<endl;
     ABC obj1;       
     obj1.print(); // print default value 1,1
          cout <<endl;
     cout<<"paramteric value"<<endl;
     ABC v1(2,4);
     v1.print(); // print entered value 2,4
          cout <<endl;
     cout<<"Added value"<<endl;
     ABC v2;
     v2=obj1+v1;         //operator overloading 1+2,1+4= 3,5
     v2.print();
          cout <<endl;
     cout<<"subtracted value"<<endl;
     ABC v3;
     v3=obj1-v1;      //operator overloading 1-2,1-4 = -1,-3
     v3.print();
          cout <<endl;
     cout <<"multiplied value"<<endl;
     ABC v4;
     v4=v2*v3;        //operator overloading 3*1=-3 ,5*3=-15
     v4.print();
 }
