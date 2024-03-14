#include<iostream>
using namespace std;

int main(){
   int x = 10;
      cout<<"The address of x :"<<endl;
      cout<<&x<<endl;  // prints address of x

   //pointer
   int* myptr = &x;  
      cout<<"The value of x using the pointer is :"<<endl;
      cout<<*myptr<<endl;  //prints value of x 
      cout<<"The address store in pointer : "<<endl;
      cout<<myptr<<endl;  //prints address of x

   // reference variable 
   int& myref= x;  
      cout<<"The value of x using the reference variable :"<<endl;
      cout<<myref<<endl;   //Prints value of x
return 0;
}