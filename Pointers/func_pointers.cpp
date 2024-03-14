#include<iostream>
using namespace std;
//* Return multiple value from a function using pointers
int getMin(int numbers[],int size){
    int min = numbers[0];
    for(int i=1; i<size; i++){
        if(numbers[i] < min)
        min = numbers[i];
    }
return min;
}
int getMax(int numbers[],int size){
    int max = numbers[0];
    for(int i=1; i<size; i++){
        if(numbers[i] > max)
        max = numbers[i];
    }
return max;
}
void getMinAndMax(int numbers[], int size, int* min, int* max){
    for(int i=1; i<size; i++){
        if(numbers[i] > *max)
        *max = numbers[i];
        if(numbers[i] > *min)
        *min = numbers[i];
}
}
int main(){
    int numbers[5]={4, 6, 2, -8, 1};
    /*cout<<getMin(numbers, 5)<<endl;
    cout<<getMax(numbers, 5)<<endl;*/
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min,&max);
    cout<<"max number: "<<max<<endl;
    cout<<"min number: "<<min<<endl;

return 0;
}