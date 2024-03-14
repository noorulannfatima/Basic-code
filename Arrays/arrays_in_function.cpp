#include<iostream>
using namespace std;

// for printing minimum number in the array
void printMin( int arr[5]);

int main(){
    int ar[5]={ 12, 23, 45, 89, 21};
    printMin(ar);  // passing array to the function
}

void printMin( int arr[5]){
    int min = arr[0];
    for( int i=0; i<5; i++){
        if(min > arr[i]){
            min= arr[i];
        }
    }
cout<< "Minimum number is : "<< min <<endl;
}