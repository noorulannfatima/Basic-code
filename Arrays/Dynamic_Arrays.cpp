#include<iostream>
using namespace std;
//! How to create/change arrays at runtime?
int main(){
    int size;
    cout<<"Size : ";
    cin>>size;
    int* myArray= new int[size];
    for(int i=0;i<size;i++){
        cout<<"size ["<<i<<"] ";
        cin>>myArray[i];
    }
    for(int i=0;i<size;i++){
        // cout<<myArray[i]<<"  ";
        cout<<*(myArray+i)<<"  ";  // Another way to write above line
    }
    delete []myArray;
    myArray=NULL;  
    /* Its good practice to use NULL while deleting as we don't want any accidental crashes in our program.
    If we don't then it(myArray) will points to the memory location that's not ours anymore.
    */
    return 0;
}