#include <iostream>
using namespace std;
 class ABC {
    int attendance;
    int days;
    float percentage;
     public:
     ABC (){         
       cout<<"ENTER ATTENDANCE AND NO OF WORKING DAYS:"<<endl;
         cin>>attendance;
         cin>>days;
         percentage=((float)attendance/days)*100;
         }
      void dis(){
         cout<<percentage<<endl;
      } 
    bool operator!(){
        if (percentage>75)
        return false;
        else 
        return true;
        }
    }; 
 int main (){
     ABC obj1;
     obj1.dis();
       if (!obj1){
      cout<<"Debarred";   }      
       else {
       cout<<"Allowed";     }
     }
