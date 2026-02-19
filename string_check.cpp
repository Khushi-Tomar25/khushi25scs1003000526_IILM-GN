#include <iostream>
using namespace std;
 class ABC {
     string ch;
     public:
     ABC (){
         ch = "Hi";
     }
      ABC (string s){
          ch=s;
          }
      void print(){
         cout<<ch<<endl;
      } 
      bool operator!(){
     return ch.length()==0;
            }
};
 int main (){
     cout <<"default message"<<endl;
     ABC obj1;       
     obj1.print();      // prints default message = Hi
     cout<<"User Message"<<endl;
     ABC obj2("");     // prints user message = Hello
     obj2.print();
     if(obj2.operator!()) {
         cout<<"no message entered";
     }
     else {
         cout<<"User  entered a Message ";  }
}
