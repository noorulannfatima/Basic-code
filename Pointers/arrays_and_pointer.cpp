#include<iostream>
using namespace std;
void process(int *arr, int n){
    // inside this function we have the access of the same array as in the main
    for (int i=0; i<n; i++){
        cout<<*(arr + i)<<" "<<endl;
    }
    *(arr +1)=34;  // changing value at index 1 by using address

}
int main(){
    int arr[]={1,2,3,4};
    
    process(arr, 4);
    for (int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}