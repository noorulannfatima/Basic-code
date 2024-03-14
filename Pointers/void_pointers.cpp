#include<iostream>
using namespace std;
//! Void pointers can hold the address of variable of any other data type
void printNumber(int* intPtr){
    cout<<*intPtr<<endl;
}
void printLetter(char* charPtr){
    cout<<*charPtr<<endl;
}
void print(void* ptr, char type){
    switch (type)
    {
    case 'i':cout<<*((int*)ptr)<<endl; break;
    case 'c':cout<<*((char*)ptr)<<endl; break;
    }
    //! Be carefull when using void pointer as it can cause logical errors (in switch case)
}
int main(){
    int number = 9;
    char letter = 'a';
    /*printNumber(&number);
    printLetter(&letter);*/
    print(&number, 'i');
    print(&letter, 'c');
    
return 0;
}