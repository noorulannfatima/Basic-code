#include<iostream>
using namespace std;

class operations {
    int a, b, add, sub, mul;
    float div;

public:
void get();
void sum();
void difference();
void multiply();
void divide();

};

inline void operations :: get ()
{
    cout<< "Enter first value : "<<endl;
    cin>> a ;
    cout<< "Enter second value : "<<endl;
    cin>> b ;
}

inline void operations :: sum()
{
    add = a + b;
    cout<<"The addition of two values is :"<< a + b << "\n";
}

inline void operations :: difference()
{
    sub = a-b;
    cout<<"The difference between two values is :"<< a - b <<"\n";
}

inline void operations :: multiply()
{
    mul = a*b;
    cout<<" Product of two numbers is :"<< a*b<<"\n";
}

inline void operations :: divide()
{
    div = a/b;
    cout<< " Division of two numbers is :"<< a/b<<"\n";
}

int main(){
    cout<<"Program using inline function and classes"<<endl;
    operations o;
    o.get();
    o.sum();
    o.difference();
    o.multiply();
    o.divide();
    return 0;
}