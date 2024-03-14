#include <iostream>
using namespace std;
// Functions 
int max (int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
// using pointers in functions
void fun (int* ptr)
{
  *ptr = 30;
}

int main(){
    int a = 24;
    int b = 34;
    int m = max(a, b);

    cout<<"Max num is :"<< m << endl;

    int x = 20;
    fun(&x);
    cout<<" x is : "<< x <<endl;
    return 0;
}