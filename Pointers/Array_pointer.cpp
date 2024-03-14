#include<iostream>
using namespace std;
//! How to use pointers with arrays.
int main(){
    int luckyNumbers[5]={3,6,4,8,6};
    cout<<luckyNumbers<<endl;  // prints address of first 
    cout<<luckyNumbers[0]<<endl;  // prints value store in first
    cout<<luckyNumbers[2]<<endl;
    cout<<*(luckyNumbers + 2 )<<endl;

    int goofyNumbers[5];
    for(int i=0; i<=4;i++){
        cout<<"Number : ";
        cin>>goofyNumbers[i];
    }
    for(int i=0; i<=4; i++){  // Be careful here, do not use the memory location that doesn't belongs to you
        cout<<*(goofyNumbers + i)<<" ";
    }

    return 0;
}