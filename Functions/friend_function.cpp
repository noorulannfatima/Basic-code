#include<iostream>
using namespace std;
//Find the largest of two numbers using Friend Function
class Largest {
    int a, b, m;
public:
void set_data();
 friend void find_max(Largest);   // That's how you can declare friend function
};
void Largest:: set_data()
{
    cout<<"Enter first value : "<<endl;
    cin>> a;
    cout<<"Enter second value : "<<endl;
    cin>>b ;
}
void find_max (Largest t)
{
    if(t.a>t.b)
    t.m=t.a;
    else
    t.m=t.b;
    cout<<"The Largest number is : "<< t.m; 
}
int main(){
    Largest l;
    l.set_data();
    find_max(l);
    return 0;
}
/* we can have multiple friend function but if we have alot 
of friend function it will break the whole idea of encapsulation*/