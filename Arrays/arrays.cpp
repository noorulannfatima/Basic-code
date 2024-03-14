#include<iostream>
using namespace std;
 // To find the lenght of array by using sizeof operator
int main(){
    int arr[]= {1,2,3,4,5};
    int* ptr= arr;
   // printng address using array name
    cout<< "address by using address name : "<<&arr<<endl;
   // printng address by using pointer
    cout<<"Address by using pointers : "<<ptr<<endl;
   // size of on element of array
    cout<<"The size of one element of array is : "<<sizeof(arr[0])<<endl;
   // size of array
    cout<<"The size of array is :"<<sizeof(arr)<<endl;
   //lenght of array
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The lenght of an array is : "<<n<<endl;
   //! Print elements of an array without indexing
   cout << "first element: " << *arr << endl; 
   cout << "Second element: " << *(arr + 1) << endl; 
   cout << "Third element: " << *(arr + 2) << endl; 
   cout << "fourth element: " << *(arr + 3) << endl; 
    cout<< "Fifth element: "<<*(arr + 4)<<endl;
    
return 0;
}